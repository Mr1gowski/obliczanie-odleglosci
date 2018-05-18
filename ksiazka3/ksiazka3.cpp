#include"stdafx.h"
#include <iostream>
#include <string>
#include <array>

const int Season = 4;
const std::array<std::string, Season> Sname = { "wiosna", "jesien", "lato", "zima" };
void fill(std::array<double, Season> *pa);
void show(std::array<double, Season> da);
int main()
{
	std::array<double, Season> expenses;
	fill(&expenses);
	show(expenses);
	std::cin.get();
	return 0;
}

void fill(std::array<double, Season> *pa)
{
	using namespace std;
	for (int i = 0; i < Season; i++)
	{
		cout << "podaj wydatki za okres " << Sname[i] << endl;
		cin >> (*pa)[i];
	}
}

void show(std::array<double, Season> da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nWYDATKI\n";
	for (int i = 0; i < Season; i++)
	{
		cout << Sname[i] << ": " << da[i] << endl;
		total += da[i];
	}

	cout << "laczne wydatki roczne to " << total;
}