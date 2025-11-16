#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Ukr");
    cout << "\t\t Лаборатрна робота №9" << endl;
    cout << "Завдання 2: Обчислення значення матриці\n";
    cout << "за допомогою вектора A та змінного аргументу X" << endl << endl;
    float x_start = 5, x_end = 6.75, dx = 0.15;
    const short col = 5;
    int raw = 0;
    float a[5]{2.4, 0.75, 12.7, 5.1, 4.1}, x[15]; //!об'єм масиву х взято зі запасом

    for (x_start = 5; x_start <= x_end; x_start+=dx)
    {
        x[raw] = x_start; //присвоєння рядку значення
        raw++; //рахує кількість рядків
    }
    float t[col][raw];
    cout << "Обчисленна матриця:" << endl;
    for (int i = 0; i < raw; i++)
        {
            for (int j = 0; j < col; j++)
            {
               t[j][i]= a[j]*tan(a[j]*x[i]+x[i]);
               cout << fixed << setprecision(3) << t[j][i] << "\t";
            }
            cout << "\n";
        }
    
    return 0;
}