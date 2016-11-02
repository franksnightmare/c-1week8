#include "matrix.ih"

Matrix &Matrix::operator()(Mode writeMode, size_t writeStart, size_t writeParts)
{
	d_writeMode = writeMode;
	d_writeStart = writeStart;
	d_writeParts = writeParts;
	return *this;
}
