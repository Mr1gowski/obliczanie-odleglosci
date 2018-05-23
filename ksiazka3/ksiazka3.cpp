#include"stdafx.h"
#include <iostream>
using namespace std;
void swapa(int &a, int &b);
void swapb(int *p, int *q);
void swapc(int a, int b);



int main()
{
	int wallet1 = 300;
	int wallet2 = 450;


	cout << wallet1 << endl << wallet2 << endl;
	swapa(wallet1, wallet2);
	cout << wallet1 << endl << wallet2 << endl;
	swapb(&wallet1, &wallet2);
	cout << wallet1 << endl << wallet2 << endl;
	swapc(wallet1, wallet2);
	cout << wallet1 << endl << wallet2 << endl;


	cin.get();
	return 0;
}

void swapa(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swapb(int * p, int * q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void swapc(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
