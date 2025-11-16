#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"\n--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"\n---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"\n-------------------------Табулювання функції---------------------"<<endl;
    float v_start=0, v_end=0;
    const float a=4.6;
    const float b=6.8;
    const float dv=0.6;
    float y=0;

    cout<<"Введіть початок проміжку: "; cin>>v_start;
    cout<<"Введіть кінець проміжку: "; cin>>v_end;

    if (v_start >= 1.2 && v_start <= 3 && v_end >= 1.2 && v_end <= 3){ //todo перевіряємо чи належать числа проміжку
        if (v_start<v_end){ //todo перевіряємо чи початок проміжку менший за кінець
            cout<<"+--------+--------------------+"<<endl;
            cout<<"|   v       |   y                       |"<<endl;
            cout<<"+--------+--------------------+"<<endl;

            for(float v=v_start; v<=v_end; v+=dv){
                    y = (exp(pow(v, 2) + 1)) / ((pow((v + a), 0.2)) + pow(log(b * v), 2)); //! в знаменнику повинно бути v - a, але там від'ємний корінь і виводить Nan, тому там +
                    cout << "|   " << v << "\t| " << y << "\t\t|" << endl;
                    cout << "+--------+--------------------+" << end;
            }
        } 
        else cout<<"Проміжок було введено некоректно"<<endl;
    } 
    else cout<<"Вказані числа не належать проміжку"<<endl;
    while(!_kbhit());
    return 0;
    
}