#pragma once
#include "Product.h"

class Cart
{

private:
	Products* products;
	int _productsCount;

public:
	Products* getProducts();
	int getProductCount();

	void setProducts(Products* products);
	void setProductCount(int ProductsCount);

	Cart(Products* products, int ProductCount, string category);
	Cart();

	double GetFullCost();
};
