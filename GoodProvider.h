#ifndef good_provider_h
#define good_provider_h

#include "good.h"

struct GoodProvider
{
	static void print(Good good)
	{
		cout << "ID: " << good.get_id() << endl;
		cout << "Name: " << good.get_name() << endl;
		cout << "Price: " << good.get_price() << endl;
		cout << "Quantity: " << good.get_quantity() << endl;
	}
	static void input(Good& good)
	{
		string name;
		double price;
		unsigned long long quantity;
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter price: ";
		cin >> price;
		cout << "Enter quantity: ";
		cin >> quantity;
		good.set_name(name);
		good.set_price(price);
		good.set_quantity(quantity);
	}
	static void GetGoodsByName(Good* goods, int size, string name)
	{
		for (int i = 0; i < size; i++)
		{
			if (goods[i].get_name() == name)
			{

				print(goods[i]);
			}
		}
	}
	static void GetGoodsByPrice(Good* goods, int size, double price)
	{
		for (int i = 0; i < size; i++)
		{
			if (goods[i].get_price() == price)
			{
				print(goods[i]);
			}
		}
	}
	static void GetGoodsByQuantity(Good* goods, int size, unsigned long long quantity)
	{
		for (int i = 0; i < size; i++)
		{
			if (goods[i].get_quantity() == quantity)
			{
				print(goods[i]);
			}
		}
	}
	static void GetGoodsByPriceRange(Good* goods, int size, double min, double max)
	{
		for (int i = 0; i < size; i++)
		{
			if (goods[i].get_price() >= min && goods[i].get_price() <= max)
			{
				print(goods[i]);
			}
		}
	}
};

#endif