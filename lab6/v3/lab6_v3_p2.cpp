#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"-------------------------Завдання 2-------------------------------"<<endl;
    cout<<"---Обчислення суми та добутку для заданого значення n----"<<endl;

    short n=0;
    cout<<"Enter n: "; cin>>n;

    float suma=0;
    float dobytok=1;

    for(int k=1; k<=n; k++){
        suma+=pow(k,2)/(pow(k,2)+2*k+3);
        dobytok *=pow(k,2)/(pow(k,2)+2*k+3);
    }
    cout<<"Результати обчислень: "<<endl;
    cout<<"Сума: "<<suma<<endl;
    cout<<"Добуток: "<<dobytok<<endl;

    return 0;

}