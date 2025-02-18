#include <iostream>
#include <math.h>
using namespace std;

float term(float x){
    return 1+(((float)sin(2*x))/x);
}

int main(){
    setlocale (LC_ALL, "Ukr");
    cout<<"\n------------------Лабораторна робота №6-----------------------"<<endl;
    cout<<"\n-------------------------Завдання 2-------------------------------"<<endl;
    cout<<"\n---Обчислення суми та добутку для заданого значення n----"<<endl;

    int n=0;
    cout<<"Введіть значення n: "; cin>>n;

    float sum=0;
    float product=1;

    for(int k=1; k<=n; k++){
        sum+=term(k);
        product *=term(k);
    }
    cout<<"Результати обчислень: "<<endl;
    cout<<"Сума: "<<sum<<endl;
    cout<<"Добуток: "<<product<<endl;

    return 0;

}