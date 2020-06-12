#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
public:
	void setPercent(double _percent);

	double getPercent();

	PercentDiscount(CategoryType _category, double _percent);
	double Calculate(Product* product) override;


private:
	double _percent;
};
