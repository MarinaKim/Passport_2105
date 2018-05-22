#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(string passport_ID, string name, string surname, Date date)
{
	this->passport_ID = passport_ID;
	this->name = name;
	this->surname = surname;
	this->birth_date = date;
}

void ForeignPassport::addVisa(Visa v)
{
	/*this->Visas.pushBack(v);*/
	this->Visas.push_back(v);
}

istream & operator >> (istream & is, ForeignPassport & fp)
{
	is >> fp.passport_ID >> fp.name >> fp.surname >> fp.birth_date;
	
	return is;
}

ostream & operator<<(ostream & os, ForeignPassport fp)
{
	os << setw(12) << fp.passport_ID << setw(15) << fp.name << setw(20) << fp.surname << setw(12) << fp.birth_date << endl;
	/* Итератор:
	указатель, который хранит в себе адрес next_pointer
	*/
	list<Visa>::iterator iter;//итератор для листа виз
	for (iter = fp.Visas.begin();iter != fp.Visas.end(); iter++)//указатель передвигается
		os <<*iter <<endl;
	return os;
}
