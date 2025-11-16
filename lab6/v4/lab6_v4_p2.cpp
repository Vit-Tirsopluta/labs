#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"-------------------------Завдання 2-------------------------------"<<endl;
    cout<<"---Обчислення суми та добутку для заданого значення n----"<<endl;

    short n=0;
    cout<<"Введіть значення n: "; cin>>n;

    float sum=0;
    float product=1;

    for(int k=1; k<=n; k++){
        sum+= 1 + (pow(sin(3*k),k))/cbrt(k);
        product *= (k/(k+1)) - pow(cos(k),k);
    }
    cout<<"Results: "<<endl;
    cout<<"Сума: "<<sum<<endl;
    cout<<"Добуток: "<<product<<endl;

    return 0;

}