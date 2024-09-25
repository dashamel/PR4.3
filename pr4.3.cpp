// Lab_04.3.cpp
// < Мельник Дар'я >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 10

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    double F, x, xp, xk, dx;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "F" << " |"
        << setw(10) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 3 && b != 0)
            F = a * (x * x) - (b * x) + c;
        else
            if (x > 3 && b == 0)
                F = (x - a) / (x - c);
            else
                F = (x / c);
        cout << "|" << setw(7) << setprecision(2) << F 
            << " |" << setw(10) << setprecision(3) << F 
            << " |" << endl;
        x += dx;
    }
    
    cout << "---------------------------" << endl;
    cin.get();
    return 0;
}