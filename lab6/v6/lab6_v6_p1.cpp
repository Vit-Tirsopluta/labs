#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    const float dx=9.8;
    float x_start=0, x_end=0;
    const float a=43;
    const float b=205;
    float y=0;

    cout<<"Вкажіть початок проміжку: "; cin>>x_start;
    cout<<"Вкажіть кінець проміжку: "; cin>>x_end;
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   x      |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;
            
            for(float x=x_start; x<=x_end; x+=dx){
                    y = (pow(log(pow(a,3)+pow(x,3)),2))/(sqrt(pow(a,3)+pow(x,3))+cbrt(b));
                    cout << "\t\t|   " << x << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
                }
    while(!_kbhit());
    return 0;
    
}