#include "matrix.ih"

Matrix &Matrix::operator+=(Matrix &left, Matrix const &right)
{
	if (left.d_nRows != right.d_nRows || left.d_nCols != right.d_nCols)
	{
		cerr << "Matrices must have the same size.";
		return *left;	
	}

	index = left.d_nRows * left.d_nCols
	for (size_t idx = 0; idx != index; ++idx)
	{
		left.d_data[idx] += right.d_data[idx];
	}
	return *left;
}
