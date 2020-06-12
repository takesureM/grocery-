#include "Product.h"

Product::Product(string _title, CategoryType _category, double _price)
{
	setTitle(_title);
	setCategory(_category);
	setPrice(_price);
}

Product::Product()
{
	setTitle("");
	setCategory(Missing);
	setPrice(0);
}

void Product::setTitle(string _title)
{
	this->_title = _title;
}

void Product::setCategory(CategoryType _category)
{
	this->_category = _category;
}

void Product::setPrice(double _price)
{
	if (_price < 0 ||_price > 100000)
	{
		throw exception("The price is above the maximum price!");
	}
	this->_price = _price;
}

string Product::getTitle()
{
	return this->_title;
}

CategoryType Product::getCategory()
{
	return this->_category;
}

double Product::getPrice()
{
	return this->_price;
}
