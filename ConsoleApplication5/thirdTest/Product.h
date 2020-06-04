#pragma once
#include <iostream>
#include <string>
#include <exception>
using namespace std;

class Products
{

private:
	string _name;
	string _description;
	double _cost;

public:
	
	void setName(string name);
	void setDescription(string description);
	void setCost(double  cost);

	string getName();
	string getDescription();
	double getCost();

	Products(string _name, string _description, double cost);
	Products();
};