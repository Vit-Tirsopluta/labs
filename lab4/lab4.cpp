#include <iostream>
#include <math.h>

using namespace std;
int main()
{ 
    setlocale(LC_ALL, "Ukr");
    cout<<"----------------Лабораторна робота №4-------------------\n"<<endl;
    cout<<"Програма для обчислень одного із значень функції на проміжку [-6;6]\n"<<endl;
    float x=0, f=0;
    cout<<"Введіть значення аргументу x: ";
    cin>>x;
    if (x!=2){
        cout<<"true"<<endl;
    }
    if (x < (-6) || x > 6)
    {
        cout << "Значення х не входить в проміжок" << endl;
    }
    else
    {
        if (fabs(x) <= 2)
        {
            f = pow(2, x);
            cout << "Перша умова виконана" << endl;
        }
        else if (2 < fabs(x) && fabs(x) < 4)
        {
            f = 2 * pow(x, 2) - 3 * x + 2;
            cout << "Друга умова виконана" << endl;
        }
        else if (-4 <= x && x < 2)
        {
            f = 8 * (x + 4);
            cout<<"Третя умова виконана"<<endl;
        }
        else
        {
            f=0;
            cout<<"Четверта умова виконана (в інших випадках)"<<endl;
        }
        cout<<"Значення функції f(x)= "<<f<<endl;
    }
    system("pause");
    return 0;
}