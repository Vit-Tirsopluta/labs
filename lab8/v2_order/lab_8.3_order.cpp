#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");

    float x = 3.38;
    const int NUM = 5;
    float a[NUM];

    cout << "+------------------------------------------------------------+" << endl;
    cout << "                   Лабораторна робота №8" << endl;
    cout << "                            Завдання 3." << endl;
    cout << "+------------------------------------------------------------+" << endl << endl;

    cout << "Виведення вектора a до сортування: " << endl;

    for (int i = 0; i < NUM; i++) {
        a[i] = ((pow(cos(pow(x, 2.3) + (i + 2)), 2)) / (pow(i + 2, 2) - 3.56)) - pow(x, 1.0 / (i + 2));
        cout << "a[" << i + 1 << "] = " << a[i] << endl;
    }

    for (int i = 0; i < NUM; i += 2) { 
        for (int j = i + 2; j < NUM; j += 2) { 
            if (a[i] > a[j]) { 
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nВиведення вектора a після сортування (парні індекси): " << endl;
    for (int i = 0; i < NUM; i++) {
        cout << "a[" << i + 1 << "] = " << a[i] << endl;
    }

    return 0;
}
