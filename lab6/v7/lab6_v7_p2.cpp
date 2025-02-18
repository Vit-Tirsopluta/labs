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
        sum+= pow((1-1/(float)k),2);
        product *= pow((1-1/(float)k),2);
    }
    cout<<"Results: "<<endl;
    cout<<"Сума: "<<sum<<endl;
    cout<<"Добуток: "<<product<<endl;

    return 0;

}