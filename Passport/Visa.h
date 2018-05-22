#pragma once
#include"Library.h"
#include "Date.h"
#include"List.h"

class Visa {
	string country;
	Date entry_date;
	Date exit_date;

public:
	Visa():country(""),entry_date(), exit_date(){}
	friend istream& operator >> (istream & is, Visa & obj);
	friend ostream& operator<<(ostream& os, Visa obj);
};