#include "matrix.ih"

bool Matrix::operator!=(Matrix const &rvalue)
{
	return !(*this == rvalue);
}
