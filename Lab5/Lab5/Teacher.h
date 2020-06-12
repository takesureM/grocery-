#pragma once
#include "Person.h"

class Teacher: public Person
{

private:
	string _teacherPosition;

public:
	void setTeacherPosition(string _teacherPosition);
	
	string getTeacherPosition();

	Teacher(string _name, string _surname, string _patronic, string _teacherPosition);
	Teacher();

};

