#include "strings.ih"

bool operator!=(Strings const &left,
	Strings const &right)
{
	return !(left == right);
}
