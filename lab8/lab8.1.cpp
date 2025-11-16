#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");

    cout << "+------------------------------------------------------------+" << endl;
    cout << "                   Лабораторна робота №8" << endl;
    cout << "                            Завдання 1" << endl;
    cout << "  Програма знаходження суми, різниці та добутку двох векторів" << endl << endl;
    cout << "+------------------------------------------------------------+" << endl;

    int m = 5;
    float sum[m];
    float riznycia[m];
    float skal_dobutok = 0;
    float x = 12.38;
    float a[m], b[m];
    cout << "+----------+----------+-----------+-----------+" << endl;
    cout << "| Вектор А | Вектор B |   Сума    |  Різниця  |" << endl;
    cout << "+----------+----------+-----------+-----------+" << endl;

    for (int i = 1; i <= m; i++)
    {
        a[i - 1] = ((pow(i, 1.5)) + 1.5) / (i + pow(sin(x), 2)) - pow(x, 0.3);
        b[i - 1] = (pow(x, 3) / (i + 1)) / (pow(2, i) - pow(sin(0.4 + i), 2));
    }
    for (int i = 0; i < m; i++)
    {
        sum[i] = a[i] + b[i];
        riznycia[i] = a[i] - b[i];
        skal_dobutok += a[i] * b[i];
        cout << fixed << setprecision(4) << "  " << a[i] << "    " << b[i] << "    " << sum[i] << "     " << riznycia[i] << endl;
    }
    cout << "+----------+----------+-----------+-----------+" << endl;
    cout << "Скалярний добуток = " << skal_dobutok << endl;
    cout << "+----------+----------+-----------+-----------+" << endl;
    
    for (int h = 1; h <= m; h++)
    {
        a[h] = h;
        cout << a[h] << endl;
    }
    
    return 0;
}