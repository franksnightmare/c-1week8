#include "matrix.ih"

bool operator==(Matrix const &left, Matrix const &right)
{
	if (left.d_nRows != right.d_nRows)
		return false;
	if (left.d_nCols != right.d_nCols)
		return false;
	
	for (size_t index = 0; index != d_nRows * d_nCols;
		++index)
	{
		if (left.d_data[index] != right.d_data[index])
			return false;
	}
	
	return true;
}
