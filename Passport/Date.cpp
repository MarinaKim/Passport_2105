#include "Date.h"

istream & operator >> (istream & is, Date & d)
{
	char c;
	is >> d.dd >> c >> d.mm >> c >> d.yy;
	return is;
}

ostream & operator<<(ostream & os, Date d)
{
	os << d.dd << "\t" << d.mm << "\t" << d.yy;
	return os;
}
