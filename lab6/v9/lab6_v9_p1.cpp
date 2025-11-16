#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    const float dk=1;
    float k_start=0, k_end=0;
    const float a=2.8;
    const float b=1.5;
    float y=0;

    cout<<"Вкажіть початок проміжку: "; cin>>k_start;
    cout<<"Вкажіть кінець проміжку: "; cin>>k_end;

    if (k_start >= -10 && k_start <= 1 && k_end >= -10 && k_end <= 1){
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   k      |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;
            
            for(float k=k_start; k<=k_end; k+=dk){
                    y = cbrt(fabs(b*k)/atan(pow(b,2)/(pow(a,2)+pow(k,2))));
                    cout << "\t\t|   " << k << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
                }
    else cout<<"Вказані числа не належать проміжку"<<endl;
    while(!_kbhit());
    return 0;
    
}