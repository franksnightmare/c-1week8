#include "matrix.ih"

Matrix Matrix::operator+(Matrix const &left, Matrix const &right)
{
	if (left.d_nRows != right.d_nRows || left.d_nCols != right.d_nCols)
	{
		cerr << "Matrices must have the same size.";
		return *left;	
	}

	Matrix copy(right);
	index = copy.d_nRows * copy.d_nCols
	for (size_t idx = 0; idx != index; ++idx)
	{
		copy.d_data[idx] += left.d_data[idx];
	}
	return copy;
}
