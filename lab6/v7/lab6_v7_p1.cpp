#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    const float dv=0.75;
    const float a=0.84;
    const float b=0.63;
    float v_start=0, v_end=0;
    float y=0;

    cout<<"Вкажіть початок проміжку: "; cin>>v_start;
    cout<<"Вкажіть кінець проміжку: "; cin>>v_end;

    if (v_start >= 0.5 && v_start <= 1.9 && v_end >= 0.5 && v_end <= 1.9){
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   v      |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;
            
            for(float v=v_start; v<=v_end; v+=dv){
                    y = (1+pow(cos(pow(a,3)+(pow(v,3))),2))/(pow(v,2)+cbrt(tan(b*v)));
                    cout << "\t\t|   " << v << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
                }
    }
    else cout<<"Проміжок введено некоректно"<<endl;
    while(!_kbhit());
    return 0;
    
}