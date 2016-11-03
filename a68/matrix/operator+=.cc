#include "matrix.ih"

Matrix &Matrix::operator+=(Matrix const &other)
{
	if (d_nRows != other.d_nRows || d_nCols != other.d_nCols)
	{
		cerr << "Matrices must have the same size.";
		return *this;	
	}

	for (size_t idx = 0; idx != d_nRows * d_nCols; ++idx)
	{
		d_data[idx] += other.d_data[idx];
	}
	return *this;
}
