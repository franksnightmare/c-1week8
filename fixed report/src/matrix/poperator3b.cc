#include "matrix.ih"

Proxy Matrix::operator()(Mode mode, size_t start)
{
	return Proxy(this, start, 0, mode);
}
