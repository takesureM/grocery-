#include "CertificateDiscount.h"

CertificateDiscount::CertificateDiscount(CategoryType _category, double _amount):DiscountBase(_category)
{
	this->setAmount(_amount);
}

void CertificateDiscount::setAmount(double _amount)
{
	if (_amount < 0 || _amount > 10000)
	{
		throw exception("Amount should in the range of 0 to 10000");
	}
	this->_amount = _amount;
}

double CertificateDiscount::getAmount()
{
	return this->_amount;
}

double CertificateDiscount::Calculate(Product* product)
{
	if (product->getCategory() == this->getCategory())
	{
		if (this->getAmount() > product->getPrice())
		{
			double newAmount = this->getAmount() - product->getPrice();
			this->setAmount(newAmount); 
			return 0;
		}
		else
		{
			double newAmount =   product->getPrice() - this->getAmount();
			this->setAmount(0);
			return 0;
		}
	}
	return product->getPrice();
}

