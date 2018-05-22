#include "Passport.h"

istream & operator >> (istream & is, Passport & obj)
{
	is >> obj.passport_NO >> obj.name >> obj.surname >> obj.birth_date;
	return is;
}

ostream & operator<<(ostream & os, Passport obj)
{
	os << setw(14) << obj.passport_NO << setw(15) << obj.name << setw(20) << obj.surname << setw(10) << obj.birth_date<<endl;
	return os;
}
