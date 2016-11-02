#include "matrix.ih"

ostream &operator<<(ostream &output, Matrix const &rvalue)
{
	for (size_t rowNum = 0; rowNum != rvalue.d_nRows; ++rowNum)
	{
		double const *start = rvalue.row(rowNum);
		double const *end = start + rvalue.d_nRows;
		for (double const *place = start; place != end; ++place)
			output << *place;
		output << '\n';
	}
	return output;
}
