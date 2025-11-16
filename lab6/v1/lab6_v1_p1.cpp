#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    float e_min=0, e_max=0;
    const float a=46;
    const float b=1.85;
    const float de=0.8;
    float y=0,x1,x2;

    cout<<"Введіть початок проміжку: "; cin>>e_min;
    cout<<"Введіть кінець проміжку: "; cin>>e_max;

    if (e_min >= 0.4 && e_min <= 6.3 && e_max >= 0.4 && e_max <= 6.3){
        if (e_min<e_max){
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   e       |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;

            for(float e=e_min; e<=e_max; e+=de){
                    x1=pow(log(b*e),4)+0.85;
                    x2=cbrt(a+(b*pow(e,3)));
                    y = x1/x2;
                    if (x2 == 0) cout<<"На нуль ділити не можна"<<endl;
                    else {
                    cout << "\t\t|   " << e << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
                    }
            }
        } 
        else cout<<"Неправильний порядок проміжку"<<endl;
    } 
    else cout<<"Вказані числа не лежать на проміжку"<<endl;
    while(!_kbhit());
    return 0;
    
}