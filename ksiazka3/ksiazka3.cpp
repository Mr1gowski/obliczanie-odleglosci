#include"stdafx.h"
#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> pa[i].fullname;
		cout << "imie " << pa[i].fullname <<endl;
		cin >> pa[i].hobby;
		cout << "hobby " << pa[i].hobby<< endl;
		cin >> pa[i].ooplevel;
		cout << "level " << pa[i].ooplevel << endl;
		if (pa[i].fullname == "")
			break;

	}
	return n;
}
void display(student st)
{
	cout << st.fullname<<endl;
	cout << st.hobby << endl;
	cout << st.ooplevel << endl;
}
void display1(const student *ps)
{
	cout << ps->fullname<<endl;
	cout << ps->hobby<<endl;
	cout << ps->ooplevel << endl;
}
void display2(const student pa[], int n)
{
	for (int  i = 0; i < n; i++)
	{
		cout << pa[i].fullname << endl;
		cout << pa[i].hobby << endl;
		cout << pa[i].ooplevel << endl;
	}
}

int main()
{
	cout << "podaj wielkosc";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display(ptr_stu[i]);
		display1(&ptr_stu[i]);
	}
	display2(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "gotowe";

	cin.get();

	

	return 0;

}
