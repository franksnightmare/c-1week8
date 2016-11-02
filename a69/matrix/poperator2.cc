#include "matrix.ih"

Proxy Matrix::operator()(Mode mode)
{
	return Proxy(this, 0,
		mode == BY_ROWS ? d_nRows : d_nCols,
		mode);
}
