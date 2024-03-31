#include "GoodProvider.h"

int main()
{
	int size;
	cout << "Enter size: ";
	cin >> size;
	
	Good * goods = new Good[size];
	for (int i = 0; i < size; i++)
	{
		cin.ignore();
		GoodProvider::input(goods[i]);
	}
	for (int i = 0; i < size; i++)
	{
		GoodProvider::print(goods[i]);
	}
	do
	{
		system("cls");
		cout << "#>---------------<MENU>---------------<#" << endl;
		cout << "|       1. Get Goods By Name           |" << endl;
		cout << "|       2. Get Goods By Price          |" << endl;
		cout << "|       3. Get Goods By Quantity       |" << endl;
		cout << "|       4. Get Goods By Price Range    |" << endl;
		cout << "|       5. Print all goods             |" << endl;
		cout << "#>------------------------------------<#" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;
		cout << endl << endl;
		switch (choice)
		{
		case 1:
		{
			cout << "Get Goods By Name:" << endl;
			string name;
			cout << "Enter name: ";
			cin.ignore();
			getline(cin, name);
			GoodProvider::GetGoodsByName(goods, size, name);
		}break;
		case 2:
		{
			cout << "Get Goods By Price:" << endl;
			double price;
			cout << "Enter price: ";
			cin >> price;
			GoodProvider::GetGoodsByPrice(goods, size, price);

		}break;
		case 3:
		{
			cout << "Get Goods By Quantity:" << endl;
			unsigned long long quantity;
			cout << "Enter quantity: ";
			cin >> quantity;
			GoodProvider::GetGoodsByQuantity(goods, size, quantity);
		}break;
		case 4:
		{
			cout << "Get Goods By Price Range:" << endl;
			int min, max;
			cout << "Enter min: ";
			cin >> min;
			cout << "Enter max: ";
			cin >> max;
			GoodProvider::GetGoodsByPriceRange(goods, size, min, max);
		}break;
		case 5:
		{
			cout << "Print all goods:" << endl;
			for (int i = 0; i < size; i++)
			{
				GoodProvider::print(goods[i]);
			}
		}
		default:
			cout << "Invalid choice!" << endl;
		}
		system("pause");
	}while(true);
	

	
	return 0;
}