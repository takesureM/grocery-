#pragma once
#include <iostream>
#include "CategoryType.h"

using namespace std;

class Product
{
private:
	string _title; 
	CategoryType _category;
	double _price;

public:
	void setTitle(string _title);
	void setCategory(CategoryType _category);
	void setPrice(double _price);

	string getTitle();
	CategoryType getCategory();
	double getPrice();

	Product( string _title, CategoryType _category, double _price);
	Product();

};
