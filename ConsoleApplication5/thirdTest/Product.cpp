#include "Product.h"

Products::Products()
{
	this->setName("unknown");
	this->setDescription("unknown");
	this->setCost(0);
}

Products::Products(string _name, string _description, double cost)
{
	this->setName(_name);
	this->setDescription(_description);
	this->setCost(cost);
}

void Products::setName(string name)
{
	this->_name = name;
}

void Products::setDescription(string _description)
{
	this->_description = _description;
}

void Products::setCost(double cost)
{
	if (cost < 0)
	{
		throw exception("Cost cannot be negative!");
	}
	this->_cost = cost;
}

string Products::getName()
{
	return this->_name;
}
string Products::getDescription()
{
	return this->_description;
}

double Products::getCost()
{
	return this->_cost;
}
