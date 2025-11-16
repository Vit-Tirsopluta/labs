#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale (LC_ALL, "Ukr");
    cout << "+----------------------------------------------------+";
    cout << "\n\t\tЛабораторна робота №8" << endl;
    cout << "\t\t    Завдання 3:" << endl;
    cout << " Сортування елементів масиву від першого додатнього" << endl;
    cout << "+----------------------------------------------------+";

    int num = 5;
    float a[num]; 
    const float x = 4.38;

    cout << "\nМасив а до сортування:" << endl;
    for (int i = 0; i < num; i++){
        a[i] = ((pow(cos(pow(x, 2.3) + i + 1), 2)) / pow(i + 1, 2) + 2 * (i + 1) + 3) + pow(x, (i + 1) / 2);
        cout << a[i] << endl;
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (a[i] > a[j]) {  
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        } 
    }

    cout << "\nМасив а після сортування по зростанню:" << endl;
    for (int i = 0; i < num; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
