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
    cout << "                            Завдання 2." << endl;
    cout << "+------------------------------------------------------------+" << endl << endl;
    int count = 0;
    int num = 5;
    float x = 12.38, a[num];
    cout << "Елементи вектора A[5]" << endl;
    for (int i = 1; i <= num; i++)
    {
        a[i - 1] = ((pow(i, 1.5)) + 1.5) / (i + pow(sin(x), 2)) - pow(x, 0.3);
        cout << a[i - 1] << endl;
    }
    for (int j = 0; j < num; j += 2)
        {
            if (a[j] < 0)
                count++;
        }
    cout << "Кількість від'ємних значень: " << count << endl;
    return 0;
}