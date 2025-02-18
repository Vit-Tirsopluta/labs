#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"-------------------------Завдання 2-------------------------------"<<endl;
    cout<<"---Обчислення суми та добутку для заданого значення n----"<<endl;

    short n=0;
    cout<<"Введіть n: "; cin>>n;

    float sum=0;
    float dob=1;

    for(int k=1; k<=n; k++){
        sum+=(pow((-1),k)*(k+1))/k;
        dob *=(pow((-1),k)*(k+1))/k;
    }
    cout<<"Результати обчислень: "<<endl;
    cout<<"Сума: "<<sum<<endl;
    cout<<"Добуток: "<<dob<<endl;

    return 0;

}