#pragma once
#include "Product.h"

class ProductList
{

private:
	Products* _products;
	int _productCount;
	string _category;

public:
	Products* getProducts();
	int getProductsCount();
	string getCategory();

	void setProducts(Products* _products);
	void setCategory(string category);
	void setProductCount(int);

	ProductList(Products*, int, string);
	ProductList();
};
