#include "strings.ih"

bool Strings::operator!=(Strings const &rvalue)
{
	return !(*this == rvalue);
}
