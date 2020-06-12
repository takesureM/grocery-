#pragma once
#include "DiscountBase.h"

class CertificateDiscount:public DiscountBase
{
public:
	void setAmount(double _amount);

	double getAmount();

	CertificateDiscount(CategoryType _category, double _amount);
	double Calculate(Product* product) override;

private:
	double _amount;
};

