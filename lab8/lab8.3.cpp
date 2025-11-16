#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");

    float x = 12.38;
    const int NUM = 5;
    float a[NUM];
    float middle_sum = 0;

    cout << "+------------------------------------------------------------+" << endl;
    cout << "                   Лабораторна робота №8" << endl;
    cout << "                            Завдання 3." << endl;
    cout << "+------------------------------------------------------------+" << endl << endl;

    cout << "Виведення вектора А до сортування: " << endl;

    for (int i = 1; i <= NUM; i++)
    {
        a[i - 1] = ((pow(i, 1.5)) + 1.5) / (i + pow(sin(x), 2)) - pow(x, 0.3);
        middle_sum += a[i - 1];
        cout << "a " << "[" << i << "]" << " = " << a[i - 1] << endl;
    }
    middle_sum /= NUM;
    cout << "\n" << "Середнє арифметичне = " << middle_sum << endl << endl;

    for (int i = 0; i < NUM; i++)
    {
        for (int j = i + 1; j < NUM; j++)
        {
            float sort = 0;         
            if (a[i] < a[j])
            {
                sort = a[i];
                a[i] = a[j];
                a[j] = sort;
            }
        }
    }
    cout << "\n" << "Виведення після сортування: " << endl << endl;
    for (int i = 0; i < NUM; i++)
    {
        if (a[i] > middle_sum)
            cout << a[i] << endl;
    }
    return 0;
}