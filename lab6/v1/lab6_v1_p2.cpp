#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"-------------------------Завдання 2-------------------------------"<<endl;
    cout<<"---Обчислення суми та добутку для заданого значення n----"<<endl;

    float suma=0;
    float dobutok=1;
    int n=0;
    cout<<"Введіть значення n: "; cin>>n;

    for(int k=1; k<=n; k++){
        double term=(pow((-1),k)*(k+1))/k;
        cout<<"k= "<<k<<": "<<term<<endl;
        suma += term;
        dobutok *= term;
    }
    cout<<"Результати обчислень: "<<endl;
    cout<<"Сума: "<<suma<<endl;
    cout<<"Добуток: "<<dobutok<<endl;

    return 0;

}