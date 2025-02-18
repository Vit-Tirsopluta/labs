#include <iostream>
#include <cmath>
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
    float x = 3.38, a[num];
    cout << "Елементи вектора а:" << endl;
    for (int i = 0; i < num; i++)
    {
        a[i] = ((pow(cos(pow(x, 2.3) + (i + 1)), 2)) / (pow(i + 1, 2) - 3.56)) - pow(x, 1.0 / (i + 1));
        cout << a[i] << endl;
    }

    float max_num = a[4];
    for (int j = 1; j <= num; j += 2)
        {
            if (fabs(a[j]) > max_num) max_num = fabs(a[j]);
        }
    cout << "Найбільший за модулем елемент: " << max_num << endl;


    return 0;
}