#include "ProductList.h"

ProductList::ProductList()
{
	this->setProducts(nullptr);
	this->setProductCount(0);
	this->setCategory("Unkown ");
}

ProductList::ProductList(Products*, int, string)
{
	this->setProducts(_products);
	this->setProductCount(_productCount);
	this->setCategory(_category);
}
void ProductList::setProducts(Products* _products)
{
	this->_products = _products;
}

void ProductList::setProductCount(int _productCount)
{
	if (_productCount < 0)
	{
		throw exception("Count cannot be negative");
	}
	this->_productCount = _productCount;
}

void ProductList::setCategory(string _category)
{
	this->_category = _category;
}

Products* ProductList::getProducts()
{
	return this->_products;
}

int ProductList::getProductsCount()
{
	return this->_productCount;
}
string ProductList::getCategory()
{
	return this->_category;
}