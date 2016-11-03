#include "matrix.ih"

istream &operator>>(istream &input, Proxy &&pr)
{	
	size_t const nRows = pr.d_matrix->nRows();
	size_t const nCols = pr.d_matrix->nCols();
	size_t boundary = pr.d_mode == BY_ROWS
		? nRows : nCols;
	if (pr.d_steps == 0)
		pr.d_steps = boundary;
	
	// Boundary limit for number of rows/columns.
	// Insertion past the bounds is ignored.
	if (pr.d_start >= boundary)
			return input;
	
	if (pr.d_start + pr.d_steps >= boundary)
		pr.d_steps = boundary - pr.d_start;
	
	if (pr.d_mode == BY_ROWS)
	{
		// Row-wise can directly loop through
		// all required entries. 
		double *begin = pr.d_matrix->row(pr.d_start);
		double *end = begin + pr.d_steps * nCols;
		for (double *place = begin; place != end; ++place)
			input >> *place;
	}
	else
	{
		// Column-wise needs a column step and a row step.
		double *colStart = pr.d_matrix->row(0)
			+ pr.d_start;
		double *colEnd = colStart + pr.d_steps;
		for (double *col = colStart; col != colEnd; ++col)
		{
			for (size_t row = 0; row != nRows; ++row)
			{
				double *place = col + row * nCols;
				input >> *place;
			}
		}
	}
	
	return input;
}
