#include "matrix.ih"

Matrix &Matrix::operator()(size_t nRows, size_t nCols)
{
	delete[] d_data;
	
	d_nRows = nRows;
	d_nCols = nCols;
	d_data = new double[nRows * nCols];
	d_writeParts = d_writeMode == BY_ROWS ? nRows : nCols;
	
	return *this;
}
