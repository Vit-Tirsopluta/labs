#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    
    int m = 5;
    float x = 3.38;
    float sum[m];
    float riznycia[m];
    float skal_product = 0;
    float A[m], B[m];

    cout << "+------------------------------------------------------------+" << endl;
    cout << "                   Лабораторна робота №8                     " << endl;
    cout << "                            Завдання 1                       " << endl;
    cout << "  Програма знаходження суми, різниці та добутку двох векторів " << endl;
    cout << "+------------------------------------------------------------+" << endl;
    cout << "+----------+----------+-----------+-----------+" << endl;
    cout << "| Вектор А | Вектор B |   Сума    |  Різниця  |" << endl;
    cout << "+----------+----------+-----------+-----------+" << endl;

    for (int i = 0; i < m; i++)
    {
        if ((pow(i + 1, 2) - 3.56) != 0)
        {
            A[i] = ((pow(cos(pow(x, 2.3) + (i + 1)), 2)) / (pow(i + 1, 2) - 3.56)) - pow(x, 1.0 / (i + 1));
        }
        else
        {
            cout << "Знаменник дорівнює нулю для i = " << i + 1 << endl;
            A[i] = 0;
        }

        if ((pow(x, 1.0 / (i + 1)) - pow(i + 1, 2) - 3) != 0)
        {
            B[i] = (pow(cos(4 + (i + 1)), 0.2)) / (pow(x, 1.0 / (i + 1)) - pow(i + 1, 2) - 3);
        }
        else
        {
            cout << "Знаменник дорівнює нулю для i = " << i + 1 << endl;
            B[i] = 0;
        }
        // перевірка для nan
        if (isnan(A[i])) 
            A[i] = 0; 
        if (isnan(B[i]))
            B[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        sum[i] = A[i] + B[i];
        riznycia[i] = A[i] - B[i];
        skal_product += A[i] * B[i];
        cout << fixed << setprecision(4) << "  " << A[i] << "    " << B[i] << "    " << sum[i] << "     " << riznycia[i] << endl;
    }
    cout << "+----------+----------+-----------+-----------+" << endl;
    cout << "Скалярний добуток = " << skal_product << endl;
    cout << "+----------+----------+-----------+-----------+" << endl;

    return 0;
}