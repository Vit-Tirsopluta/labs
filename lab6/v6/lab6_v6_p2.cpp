#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"-------------------------Завдання 2-------------------------------"<<endl;
    cout<<"---Обчислення суми та добутку для заданого значення n----"<<endl;

    int n=0;
    cout<<"Вкажіть значення n: "; cin>>n;

    float summ=0;
    float dobutok=1;

    for(int k=1; k<=n; k++){
        summ += 2 + (float)1/k;
        dobutok *= 2 + (float)1/k;
    }
    cout<<"Результати обчислень: "<<endl;
    cout<<"Сума: "<<summ<<endl;
    cout<<"Добуток: "<<dobutok<<endl;

    return 0;

}