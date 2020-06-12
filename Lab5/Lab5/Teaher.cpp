#include "Teacher.h"

Teacher::Teacher(string _name, string _surname, string _patronic, 
	string _teacherPosition): Person(_name, _surname, _patronic)
{
	setTeacherPosition(_teacherPosition);
}

Teacher::Teacher()
{
	setTeacherPosition("Unkown");
}

void Teacher::setTeacherPosition(string _teacherPosition)
{
	this->_teacherPosition = _teacherPosition;
}

string Teacher::getTeacherPosition()
{
	return this->_teacherPosition;
}