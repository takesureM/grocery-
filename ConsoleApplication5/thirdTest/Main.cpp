#include "Cart.h"
#include "ProductList.h"
#include "Main.h"

int main()
{
	const int PRODUCTS_NUMBER = 5;
	Products* productsList = new Products[PRODUCTS_NUMBER];
	productsList[0] = Products("Rice", "Very tastefull", 22.00);
	productsList[1] = Products("Rice", "Very tastefull", 22.00);
	productsList[2] = Products("Rice", "Very tastefull", 22.00);
	productsList[3] = Products("Rice", "Very tastefull", 22.00);
	productsList[4] = Products("Rice", "Very tastefull", 22.00);

	ProductList list = ProductList(productsList, PRODUCTS_NUMBER, " valuable goods");
	delete[] productsList;

	const int LIST_CART = 3;
	productsList = new Products[LIST_CART];
	productsList[0] = Products("Rice", "Very tastefull", 22.00);
	productsList[1] = Products("Rice", "Very tastefull", 22.00);
	productsList[2] = Products("Rice", "Very tastefull", 22.00);

	Cart cart = Cart(productsList, LIST_CART, "Mashrooms");
	cout << "Total cost in the cart = " << cart.GetFullCost() << endl;
	delete[] productsList;

	return 0;
}