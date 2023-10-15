#include <iostream>
#include <cmath> //zeby dzialala funkcja "sqrt" (pierwiastek)
using namespace std; 

int main()
{
    double a, b, c, d, x1, x2; //podajemy "double" zeby liczbe byly wymierne

    cout << "Введите a\n"; 
    cin >> a;
    cout << "Введите b\n";
    cin >> b;
    cout << "Введите c\n";
    cin >> c;

    d = b * b - 4 * a * c; // Szukamy D
    if (d > 0) // dla D>0
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (d == 0) // dla D=0
    {
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << "\n";
    }
    if (d < 0) // dla D<0
        cout << "D < 0, Pierwiastkow niema";
}