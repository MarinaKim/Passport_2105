#pragma once
#include"Library.h"
#include"Passport.h"
#include "Visa.h"
#include"List.h"
#include<list>

class ForeignPassport:public Passport{
private:
	string passport_ID;
	list <Visa> Visas;
public:
	ForeignPassport() {
		passport_ID = "";
		this->name = "";
		this->surname = "";
		this->birth_date = Date();
	}
	ForeignPassport(string passport_ID, string name, string surname,Date date);
	void addVisa(Visa v);

	friend istream& operator >> (istream& is, ForeignPassport &fp);
	friend ostream& operator<<(ostream& os, ForeignPassport fp);
};