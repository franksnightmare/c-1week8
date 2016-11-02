#include "matrix.ih"

Matrix::Matrix(Matrix &&temp)
:
	d_nRows(temp.d_nRows),
	d_nCols(temp.d_nCols),
	d_writeStart(other.d_writeStart),
	d_writewriteParts(other.d_writewriteParts),
	d_data(temp.d_data),
	d_writeMode(temp.d_writeMode)
{
	temp.d_data = 0;
}
