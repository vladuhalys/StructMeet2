#ifndef good_h
#define good_h

#include "lib.h"

struct Good
{
private:
	unsigned long long id;
	string name;
	double price;
	unsigned long long quantity;
	static unsigned long long id_counter;
	static void inc_id_counter();
public:
	Good(); 
	Good(string name);
	Good(string name, double price);
	Good(string name, double price, unsigned long long quantity);
	~Good();

	unsigned long long get_id();
	string get_name();
	double get_price();
	unsigned long long get_quantity();

	void set_id(unsigned long long id);
	void set_name(string name);
	void set_price(double price);
	void set_quantity(long long quantity);
};


#endif // !good_h
