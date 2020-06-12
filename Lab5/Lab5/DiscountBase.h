#pragma once
#include "Product.h"

class DiscountBase
{
public:
	CategoryType getCategory();
	virtual double Calculate(Product* product) = 0;

protected:
	DiscountBase(CategoryType _category);

private:
	CategoryType _category;
	void setCategory(CategoryType _category);

};

void ShowCheckWithDiscount(DiscountBase* discount, Product* product, int productsCount);

