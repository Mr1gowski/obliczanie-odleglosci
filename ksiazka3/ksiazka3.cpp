#include <iostream>
#include "stock.h"

void Stock::acquire(const std::string & co, long n, double par)
{
	company = co;
	if (n < 0)
	{
		std::cout << "liczba nie moze byc ujemna!!!!!"
			<< "\nustawiam liczbe udzialow firmy "<<company<<" na 0";
		shares = 0;
	}
	else
	{
		shares = n;

	}
	shares_val = par;
	set_tot();
}


