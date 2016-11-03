#include "matrix.ih"

Proxy Matrix::operator()(Mode mode, size_t start,
	size_t parts)
{
	return Proxy(this, start, parts, mode);
}
