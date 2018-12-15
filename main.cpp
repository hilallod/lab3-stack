#include "Tcalc.h"
#include <iostream>
using namespace std;

void main()
{
	TCalculator calc;
	string example;
	int i = 1, j;
	while (i == 1)
	{
		system("cls");
		cout << "1.Calc" << endl;
		cout << "2.Exit" << endl;
		cin >> j;
		if (j == 1)
		{
			cout << "Enter exp" << endl;
			cin >> example;
			calc.SetInf(example);
			calc.ToPost();
			cout << calc.Calcucate() << endl;
			system("pause");
			j = 0;
		}
		if (j==2)
			return;
	}

}


