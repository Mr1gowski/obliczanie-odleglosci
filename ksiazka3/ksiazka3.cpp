#include"stdafx.h"
#include <iostream>

const int len = 66;
const int divs = 6;
void countdown(char a[],int low,int high,int lev);

int main()
{
	char ruler[len];
	int i;
	for (i = 1; i < len - 2; i++)
		ruler[i] = ' ';
	ruler[len - 1] = '\0';
	int max = len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	std::cout << ruler << std::endl;
	for ( i = 1; i <divs; i++)
	{
		countdown(ruler, min, max,i);
		std::cout << ruler << std::endl;
		ruler[i] = ' ';
	}
	std::cin.get();
	return 0;
}

void countdown(char a[], int low, int high, int lev)
{
	using namespace std;
	if (lev == 0)
		return;
	int mid = (low + high) / 2;
	a[mid] = '|';
	countdown(a, low, mid, lev - 1);
	countdown(a, mid, high, lev - 1);


}