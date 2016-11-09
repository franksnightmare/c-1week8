#include "strings.ih"

bool operator==(Strings const &left,
	Strings const &right)
{
	if (left.d_size != right.d_size)
		return false;
	
	for (size_t idx = 0; idx != left.d_size; ++idx)
		if ((*left.d_str[idx]).compare(
				*right.d_str[idx]) != 0)
			return false;
	
	return true;
}
