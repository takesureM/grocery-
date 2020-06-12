#include "DiscountBase.h"

DiscountBase::DiscountBase(CategoryType _category)
{
	setCategory(_category);
}

void DiscountBase::setCategory(CategoryType _category)
{
	this->_category = _category;
}

CategoryType DiscountBase::getCategory()
{
	return this->_category;
}

void ShowCheckWithDiscount(DiscountBase* discount, Product* product, int productsCount)
{
	double fullPrice = 0;
	for (int i = 0; i < productsCount; i++)
	{
		double newPrice = discount->Calculate(&product[i]);
		cout << product[i].getTitle() << "tOld Cost: "
			<< product[i].getPrice() << "tNew Cost: "
			<< newPrice << endl;
		fullPrice += newPrice;
	}
	cout << "Full Cost with Discount: " << fullPrice << endl;
}