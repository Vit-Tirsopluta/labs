#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"-------------------------Завдання 2-------------------------------"<<endl;
    cout<<"---Обчислення суми та добутку для заданого значення n----"<<endl;

    int n=0;
    cout<<"Внесіть значення n: "; cin>>n;

    float summ=0;
    float product=1;

    for(int k=1; k<=n; k++){
        summ+= 1/k + sqrt(k);
        product *=(float)1/k + (float)sqrt(k);
    }
    cout<<"Результати: "<<endl;
    cout<<"Сума: "<<summ<<endl;
    cout<<"Добуток: "<<product<<endl;

    return 0;

}