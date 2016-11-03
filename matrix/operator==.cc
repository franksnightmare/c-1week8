#include "matrix.ih"

bool Matrix::operator==(Matrix const &rvalue)
{
	if (d_nRows != rvalue.d_nRows)
		return false;
	if (d_nCols != rvalue.d_nCols)
		return false;
	
	for (size_t index = 0; index != d_nRows * d_nCols;
		++index)
	{
		if (d_data[index] != rvalue.d_data[index])
			return false;
	}
	
	return true;
}
