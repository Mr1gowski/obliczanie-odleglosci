#include"stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;
double ad(double a, double b);
double div(double a, double b);
typedef double(*dzial)(double, double);
double calc(double a, double b, dzial dziel);


int main()
{
	double wynik=calc(2.0, 4.6, ad);
	cout << wynik;

	cin.get();

	

	return 0;

}

double calc(double a, double b, dzial dziel)
{
	return dziel(a, b);
}

double ad(double a, double b)
{
	return a + b;
}

double div(double a, double b)
{
	return a / b;
}