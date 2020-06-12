#pragma once
#include "Person.h"

class Student:public Person
{

private:
	int _reportBookNumber;
	int _startYear;

public:

	void setReportBookNumber(int _reportBookNumber);
	void setStartYear(int _startYear);

	int getReportBookNumber();
	int getStartYear();

	Student(string _name, string _surname, string _patronic,
		int _reportBookNumber, int _startYear);
	Student();
};


