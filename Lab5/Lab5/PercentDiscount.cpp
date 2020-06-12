#include "PercentDiscount.h"

PercentDiscount::PercentDiscount(CategoryType _category, double _percent):DiscountBase(_category)
{
	this->setPercent(_percent);
}

void PercentDiscount::setPercent(double _percent)
{
	if (_percent < 0 || _percent > 10000)
	{
		throw exception("The value must be within the range of 0 to 10000");

	}
	this->_percent = _percent;
}

double PercentDiscount::getPercent()
{
	return this->_percent;
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->getCategory() == this->getCategory())
	{
		return product->getPrice() - (product->getPrice() * this->getPercent() / 100);
	}
	return product->getPrice();
}