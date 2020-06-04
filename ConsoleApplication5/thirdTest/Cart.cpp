#include "Cart.h"


Cart::Cart()
{
	this->setProducts(nullptr);
	this->setProductCount(0);
}

Cart::Cart(Products* products, int ProductCount, string category)
{
	this->setProducts(products);
	this->setProductCount(ProductCount);
}


void Cart::setProducts(Products* products)
{
	this->products = products;
}

void Cart::setProductCount(int _productCount)
{
	if (_productCount < 0)
	{
		throw exception("Count cannot be negative");
	}
	this->_productsCount = _productCount;
}

Products* Cart::getProducts()
{
	return this->products;
}

int Cart::getProductCount()
{
	return this->_productsCount;
}

double Cart::GetFullCost()
{
	double sum = 0;
	for (int i = 0; i < this->getProductCount(); i++)
	{
		sum += this->getProducts()[i].getCost();
	}
	return sum;
}