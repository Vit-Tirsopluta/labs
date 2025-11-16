#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"--------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"---------------------------Завдання 1-------------------------------"<<endl;
    cout<<"-------------------------Табулювання функції---------------------"<<endl;
    float f1=0, f2=0;
    double y=0;
    const float a=1.25;
    const float b=0.86;
    const float df=0.5;
    cout<<"Внесіть початок проміжку: "; cin>>f1;
    cout<<"Внесіть кінець проміжку: "; cin>>f2;

    if (f1 >= 1.3 && f1 <= 6 && f2 >= 1.3 && f2 <= 6){
            cout<<"\t\t+--------+--------------------+"<<endl;
            cout<<"\t\t|   f      |   y                       |"<<endl;
            cout<<"\t\t+--------+--------------------+"<<endl;
            
            for(float f=f1; f<=f2; f+=df){
                    y = cbrt(pow(a,3)+pow(f,3))/(pow(tan(b*f),3)+1.6);
                    cout << "\t\t|   " << f << "\t| " << y << "\t |" << endl;
                    cout << "\t\t+--------+--------------------+" << endl;
                }
    }
    else cout<<"Внесені числа не належать проміжку"<<endl;
    while(!_kbhit());
    return 0;
    
}