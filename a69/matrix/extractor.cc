#include "matrix.ih"

istream &operator>>(istream &input, Matrix &rvalue)
{
	double *begin = rvalue.d_data;
	double *end = begin + rvalue.d_nRows * rvalue.d_nCols;
	for (double *place = begin; place != end; ++place)
		input >> *place;
	
	return input;
}
