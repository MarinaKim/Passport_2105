#pragma once
#include"Library.h"
#include"Date.h"

class Passport {
private:
	string passport_NO;
protected:	
	string name;
	string surname;
	Date birth_date;

public:
	Passport():passport_NO("00"),name(""),surname(""),birth_date(){}
	Passport(string passport_NO, string name, string surname, Date birth_date) {
		this->passport_NO = passport_NO;
		this->name = name;
		this->surname = surname;
		this->birth_date = birth_date;
	}
	friend istream& operator >> (istream& is, Passport& obj);
	friend ostream& operator << (ostream& os, Passport obj);
};