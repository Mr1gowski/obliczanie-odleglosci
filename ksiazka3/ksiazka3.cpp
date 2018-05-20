#include"stdafx.h"
#include <iostream>
const double *f1(const double ar[], int n);
const double  *f2(const double[], int);
const double *f3(const double*, int);

int main()
{
	using namespace std;
	double av[3] = { 1112.4,1453,1234.2 };
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;
	cout << "Uzywanie wskaznikow do funkcji:\n";
	cout << "adres wartosci zwracana\n";
	cout << (*p1)(av, 3) << ": " << *p1(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
	const double *(*pa[3])(const double *, int) = { f1,f2,f3 };
	auto pb = pa;
	cout << "\nuzywanie tablicy wskaznikow do funkci\n";
	cout << " adres wartosc zwracana\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << "\nuzywanie wskaznika do wskaznika do funkci\n";
	cout << " adres wartosc zwracana\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

	cout << "\nuzywanie wskaznika do tablicy wskaznikow do funkci\n";
	cout << " adres wartosc zwracana\n";
	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	const double *(*(*pd)[3])(const double *, int) = &pa;
	const double *pbd = (*pd)[1](av, 3);
	cout << pbd << ": " << *pbd << endl;
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
	std::cin.get();
	return 0;

}

const double * f1(const double *ar, int n)
{
	return ar;
}


const double * f2(const double ar[], int n)
{
	return ar+1;
}

const double * f3(const double ar[], int n)
{
	return ar+2;
}