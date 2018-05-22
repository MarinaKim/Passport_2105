#include "Visa.h"

istream & operator >> (istream & is, Visa & obj)
{
	is >> obj.country >> obj.entry_date >> obj.exit_date;
	return is;
}

ostream & operator<<(ostream & os, Visa obj)
{
	os << setw(15) << obj.country << setw(12) << obj.entry_date << setw(12) << obj.exit_date << endl;
	return os;
}
