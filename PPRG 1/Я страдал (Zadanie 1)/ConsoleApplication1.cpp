#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;

	cout << "Podaj a, b, c, d, e: \n zeby kolejna liczba nie byla wieksza od poprzedniej\n";

	cout << "a=";
	cin >> a;
	
	cout << "b=";
	cin >> b;
	if (a < b) // Jezeli a<b, program nie bede dzialal
		exit(1);
	
	cout << "c=";
	cin >> c;
	if (b < c)
		exit(1);

	cout << "d=";
	cin >> d;
	if (c < d)
		exit(1);
	
	cout << "e=";
	cin >> e;
	if (d < e)
		exit(1);
 }
 