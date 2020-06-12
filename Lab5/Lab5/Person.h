#pragma once
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class Person
{

private:
	string _name;
	string _surname;
	string _patronic;

public:
	void setName(string _name);
	void setSurname(string _surname);
	void setPatronic(string _patronic);

	string getName();
	string getSurname();
	string getPatronic();

	Person(string _name, string  _surname,string _patronic);
	Person();

};

void showName(Person* person);


