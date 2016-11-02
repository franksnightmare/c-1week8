#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
:
	d_nRows(other.d_nRows),
	d_nCols(other.d_nCols),
	d_writeStart(other.d_writeStart),
	d_writeParts(other.d_writeParts),
	d_data(new double[other.d_nRows * other.d_nCols]),
	d_writeMode(other.d_writeMode)
{
	size_t size = other.d_nRows * other.d_nCols;
	for (size_t index = 0; index != size; ++index)
		d_data[index] = other.d_data[index];
}
