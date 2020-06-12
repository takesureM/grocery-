#include "Person.h"

Person::Person(string _name, string  _surname, string _patronic)
{
	setName(_name);
	setSurname(_surname);
	setPatronic(_patronic);
}

Person::Person()
{
	setName("Unkown");
	setSurname("Unkown");
	setPatronic("Unkown");
}

void Person::setName(string _name)
{
	this->_name = _name;
}

void Person::setSurname(string _surname)
{
	this->_surname = _surname;
}
void Person::setPatronic(string _patronic)
{
	this->_patronic = _patronic;
}

string Person::getName()
{
	return this->_name;
}

string Person::getSurname()
{
	return this->_surname;
}

string Person::getPatronic()
{
	return this->_patronic;
}

void showName(Person* person)
{
	cout << person->getSurname() << " " << person->getName() << " " << person->getPatronic() << endl;
}
