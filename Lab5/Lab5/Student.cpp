#include "Student.h"

Student::Student(string _name, string _surname, string _patronic, 
	int _reportBookNumber, int _startYear) : Person(_name, _surname, _patronic)
{
	setReportBookNumber(_reportBookNumber);
	setStartYear(_startYear);
}

Student::Student()
{
	setReportBookNumber(0);
	setStartYear(0);
}

void Student::setReportBookNumber(int _reportBookNumber)
{
	if (_reportBookNumber < 0)
	{
		throw exception("The report book number cannot be zero");
	}
	this->_reportBookNumber = _reportBookNumber;
}

void Student::setStartYear(int _startYear)
{
	if (_startYear < 0 || _startYear > 2020)
	{
		throw exception("The start year must not be zero and also greater than the current year!");
	}
	this->_startYear = _startYear;
}

int Student::getReportBookNumber()
{
	return this->_reportBookNumber;
}

int Student::getStartYear()
{
	return this->_startYear;
}