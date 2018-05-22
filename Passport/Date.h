#pragma once
#include"Library.h"

class Date {
	unsigned int dd;
	unsigned int mm;
	unsigned int yy;
public:
	Date() = default;
	Date(int dd, int mm, int yy) {
		this->dd = dd;
		this->mm = mm;
		this->yy = yy;
	}

	friend istream& operator >> (istream& is, Date& d);
	friend ostream& operator << (ostream& os, Date d);
};