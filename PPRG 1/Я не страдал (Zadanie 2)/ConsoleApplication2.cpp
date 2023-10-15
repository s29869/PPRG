#include <iostream>
using namespace std;
int main()
{
	double a, b, x; //podajemy "double" zeby liczbe byly wymierne
	cout << "licze rownanie liniowe, pierwszego stopnia, z jedna niewiadoma.\n";
	cout << "ax+b=0\n";

	cout << "Podaj a= ";
	cin >> a;

	cout << "Podaj b= ";
	cin >> b;

	if (a == 0) { //sama funkcja
		if (b == 0)
		{
			cout << "Rozwianzan nieskonczenie wiele\n";
		}
		else {
			cout << "Rozwiazan nie ma\n";
		}
	}
	else
	{                           //ax+b=0
		b = b * -1;             //ax=-b, -b*-1=b            
		x = b / a;                                 
		cout <<"x=" <<x<< endl;

	}

	
}