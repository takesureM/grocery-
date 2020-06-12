#include "MainLW5.h"

void MainLW5::DemoPerson()
{
	Person first = Person("Takesure", "Mamvota", "Tooyoung");
	showName(&first);
	Student second = Student("Ropafadzo", "Mamvota", "Tooyoung", 765875, 2018);
	showName(&second);
	Teacher third = Teacher("Gamuchirai", "Mamvota", "Tooyoung","Dean");
	showName(&third);
}

void MainLW5::DemoUser()
{
	User** users = new User * [8]
	{
		new User(10001, "Takesure", "1234"),
		new User(10002, "Diana", "Wqerty"),
		new User(10003, "Ropa", "AsWqwewQ"),
		new PaidUser(20004, "Takk", "traje"),
		new PaidUser(10005, "tiripamwepo", "2cotx123"),
		new PaidUser(10006, "Wake Up", "noooo"),
		new PaidUser(10007, "please", "why"),
		new PaidUser(10008, "because", "what")


	};
	string login = "tiripamwepo";
	string password = "2cotx123";
	User* loginedUser = Login(users, 8, login, password);
	cout << "Signed in as: " << loginedUser->getLogin() << endl;

	login = "Tk";
	password = "2cotx123";

	User* loginedUser2 = Login(users, 8, login, password);
	cout << "Signed in as: " << loginedUser2->getLogin() << endl;
	for (int i = 0; i < 8; i++)
	{
		delete users[i];
	}
	delete[] users;
}

void MainLW5::DemoProduct()
{
	CertificateDiscount firstDiscount = CertificateDiscount(Chocolate, 20);
	PercentDiscount secondDiscount = PercentDiscount(Coffee, 60);
	Product* products = new Product[3];
	products[0] = Product("Milk", Chocolate, 57.0);
	products[1] = Product("American", Coffee, 257.0);
	products[2] = Product("Cupcake", Cake, 457.0);
	ShowCheckWithDiscount(&firstDiscount, products, 4);
	ShowCheckWithDiscount(&secondDiscount, products, 4);
	delete[] products;
}