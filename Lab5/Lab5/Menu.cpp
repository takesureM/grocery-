#include <iostream>
#include "Menu.h"

int ReadingValue()
{
	int value;
	while (true)
	{
		if (cin >> value)
		{
			break;
		}
		else
		{
			cout << "ERROR" << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
	}
	return value;
}

void main()
{
	int functionSelection = 0;
	do
	{
		cout << " " << "Choices" << endl;
		cout << "1.Person" << endl;
		cout << "2.user" << endl;
		cout << "3.Product" << endl;
		cout << "4.Exit" << endl;

		functionSelection = ReadingValue();
		MainLW5 choice;
		switch (functionSelection)
		{
		case 1:
		{
			choice.DemoPerson();
			break;
		}

		case 2:
		{
			choice.DemoUser();
			break;
		}

		case 3:
		{
			choice.DemoProduct();
			break;
		}

		}
		
	}
	while (functionSelection != 4);
}