#include "good.h"

unsigned long long Good::id_counter = 0;

void Good::inc_id_counter()
{
	id_counter++;
}

Good::Good()
{
	set_id(id_counter);
	set_name("Unknown");
	set_price(0);
	set_quantity(0);
	inc_id_counter();
}
Good::Good(string name) : Good()
{
	set_name(name);
}
Good::Good(string name, double price) : Good(name)
{
	set_price(price);
}
Good::Good(string name, double price, unsigned long long quantity) : Good(name, price)
{
	set_quantity(quantity);
}

Good::~Good()
{
}

unsigned long long Good::get_id()
{
	return id;
}
string Good::get_name()
{
	return name;
}
double Good::get_price()
{
	return price;
}
unsigned long long Good::get_quantity()
{
	return quantity;
}

void Good::set_id(unsigned long long id)
{
	this->id = id;
}
void Good::set_name(string name)
{
	trim(name);
	if (name.empty())
	{
		name = "Unknown";
	}
	this->name = name;
}
void Good::set_price(double price)
{
	if (price < 0)
	{
		price = 0;
	}
	this->price = price;
}
void Good::set_quantity(long long quantity)
{
	if (quantity < 0)
	{
		quantity = 0;
	}
	this->quantity = quantity;
}