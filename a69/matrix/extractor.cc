#include "matrix.ih"

istream &operator>>(istream &input, Matrix &rvalue)
{
	if (d_writeMode == BY_ROWS)
	{
		double *begin = rvalue.row(rvalue.writeStart);
		double *end = begin + rvalue.d_writeParts * rvalue.d_nCols;
		double *max = rvalue.d_data + rvalue.d_nRows * rvalue.d_nCols;
		if (end > max)
			end = max;
		
		for (double *place = begin; place != end; ++place)
			input >> *place;
	}
	else
	{
		double *begin = 
		//TODO
		for (double *row = begin; row != end; ++row)
		{
		}
	}
	
	return input;
}
