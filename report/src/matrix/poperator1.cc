#include "matrix.ih"

Proxy Matrix::operator()(size_t nRows, size_t nCols, Mode mode)
{
	delete[] d_data;
	
	d_nRows = nRows;
	d_nCols = nCols;
	d_data = new double[nRows * nCols];
	
	return Proxy(this, 0,
		mode == BY_ROWS ? nRows : nCols,
		mode);
}
