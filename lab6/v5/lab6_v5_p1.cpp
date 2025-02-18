#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    const float dn=1.3;
    float n_s=0, n_e=0;
    float y=0;
    const float a=0.3;
    const float b=9.5;

    cout<<"Вкажіть початок проміжку: "; cin>>n_s;
    cout<<"Вкажіть кінець проміжку: "; cin>>n_e;

    if (n_s >= 10.5 && n_s <= 27 && n_e >= 10.5 && n_e <= 27){
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   n      |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;
            
            for(float n=n_s; n<=n_e; n+=dn){
                    y = (cbrt(exp(a*n))+b)/(0.25*pow(log(a*n),2));
                    cout << "\t\t|   " << n << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
                }
    }
    else cout<<"Проміжок введено некоректно"<<endl;
    while(!_kbhit());
    return 0;
    
}