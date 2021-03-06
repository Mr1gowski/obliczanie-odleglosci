#include"stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
struct polar
{
	double distans;
	double angle;
};

struct rect
{
	double x;
	double y;
};

polar polarrect(const rect *pxy , polar*pda);
void showpolar(const polar *pda);



int main()
{
	
	rect rp;
	polar pp;

	while (cin >> rp.x >> rp.y)
	{
		 polarrect(&rp,&pp);
		showpolar(&pp);
		cout << "podaj nastepne liczby zeby zakonczyc\n";
	}

	cin.get();
	return 0;
}

polar polarrect(const rect *pxy, polar*pda)
{
	polar answer;
	answer.distans =
		sqrt(pxy->x*pxy->x + pxy->y*pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
		return answer;
}

void showpolar(const polar *pda)
{
	const double regtodeg = 57.29577951;


	cout << "odleglosc = " << pda->distans << endl;
	cout << "kat = " << pda->angle*regtodeg << " stopni.\n";
}