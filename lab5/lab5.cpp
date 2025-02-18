#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Ukrainian");
    float x;
    unsigned int k;

    cout << "Програма - конвертер" << endl;
    cout << "Введіть суму в гривнях: ";
    cin >> x;

    cout << "Оберіть пункт меню" << endl;
    cout << "1. Доплата за держслужбовця" << endl;
    cout << "2. Доплата за вислугу років" << endl;
    cout << "3. Громадська організація" << endl;
    cout << "Ваш вибір?"<<endl;
    cin >> k;

    switch(k)
    {
        case 1:
            cout << "Сума за держслужбовця:\t" << x*0.18 << endl;
            break;
        case 2:
            cout << "Сума за вислугу років:\t" << x*0.15 << endl;
            break;
        case 3:
            cout << "Сума за громадську організацію:\t" << x*0.03 << endl;
            break;
        default:
            cout << "Помилка при виборі пункту меню:\t" << endl;
            break;
        case 15:
        cout<<"15";
        break;     
    }

    while (!_kbhit());
    return 0;
}