#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main() {
    setlocale(LC_ALL, "Ukr");

    cout << "\n----------------Nº2---------------\n\n";
    float k, a, b;
    float f;

    cout << "Введіть значення k,a,b:" << endl;
    cout << "\tk=";
    cin >> k;
    cout << "\ta=";
    cin >> a;
    cout << "\tb=";
    cin >> b;

    f = (pow(abs(b * k) / atan((b * b) / ((a * a) + (k * k))), 1.0 / 3));
    cout << "\nРезултат обчислення: \n\tf(k,a,b)=" << f << endl;
    cout << "------------------------------------------ \n";
    getchar();
}
