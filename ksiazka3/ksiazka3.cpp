#include <iostream>
using std::cin;
using std::cout;
using std::endl;
template <typename T>
void showar(T arr[], int n);

template <typename T>
void showar(T *arr[], int n);

struct debts
{
	char name[50];
	double amount;

};
int main()
{
	int things[6] = { 13,42,56,43,64,251 };
	struct debts mre[3]=
	{
		{"im wolfe", 2400},
		{"im jeff", 1900},
		{"im nobody", 0}
	};
	double *pd[3];

	for (int i = 0; i < 3; i++)
	{
		pd[i] = &mre[i].amount;
	}
	showar(things, 6);
	cout << endl;
	showar(pd, 3);
	cin.get();
	return 0;
}

template <typename T>
void showar(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		cout << endl;
	}
}

template <typename T>
void showar(T *arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *arr[i] << endl;
	}
}