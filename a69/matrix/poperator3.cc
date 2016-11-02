#include "matrix.ih"

Matrix &Matrix::operator()(Mode writeMode)
{
	d_writeMode = writeMode;
	return *this;
}
