#include "strings.ih"

bool Strings::operator==(Strings const &rvalue)
{
	if (d_size != rvalue.d_size)
		return false;
	
	for (size_t index = 0; index != d_size; ++index)
	{
		string lstring = *d_str[index];
		string rstring = *rvalue.d_str[index];
		if (lstring.compare(rstring) != 0)
			return false;
	}
	
	return true;
}
