#include "matrix.ih"

Proxy Matrix::operator()(size_t start)
{
	return Proxy(this, start, 0, BY_ROWS);
}
