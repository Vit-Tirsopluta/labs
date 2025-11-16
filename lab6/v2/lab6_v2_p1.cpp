#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    float w1=0, w2=0;
    const float a=1.35;
    const float b=8.4;
    const float dw=1;
    float y=0;

    cout<<"Внесіть початок проміжку: "; cin>>w1;
    cout<<"Внесіть кінець проміжку: "; cin>>w2;

    if (w1 >= 4.3 && w1 <= 13 && w2 >= 4.3 && w2 <= 13){
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   w      |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;
            
            for(float w=w1; w<=w2; w+=dw){
                    y = (pow((1+sqrt(a*w+b)),0.25))/pow(sin(b*w+w),2);
                    cout << "\t\t|   " << w << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
                }
    }
    else cout<<"Вказані числа не належать проміжку"<<endl;
    while(!_kbhit());
    return 0;
    
}