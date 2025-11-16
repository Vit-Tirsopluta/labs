#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    float min=0, max=0;
    const float a=1.8;
    const float b=0.56;
    const float dq=0.3;
    float y=0;

    cout<<"Введіть початок проміжку: "; cin>>min;
    cout<<"Введіть кінець проміжку: "; cin>>max;

    if (min >= 1.3 && min <= 6 && max >= 1.3 && max <= 6){
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   q       |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;

            for(float q=min; q<=max; q+=dq){
                    y = (pow(tan(q-a),2)+sqrt(log(q)))/exp(-b*q);
                    cout << "\t\t|   " << q << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
            }
    } 
    else cout<<"Введені числа не належать проміжку"<<endl;
    while(!_kbhit());
    return 0;
    
}