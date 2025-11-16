#include <iostream>
#include <cmath> 
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");

cout << "+--------------------------------------------------------------------------------+" << endl;
cout << "\t\t\t Лаборатрна робота №8" << endl;
cout << "\t\t\t Завдання 2:" << endl;
cout << " Програма для обчислення найменшого елемента масиву по модулю за парним індексом." << endl;
cout << "+--------------------------------------------------------------------------------+";
    int num = 5;
    float a[num]; 
    const float x = 4.38;

cout << "\nЕлементи масиву:" << endl;
    for (int i = 0; i < num; i++){
        a[i] = ((pow(cos(pow(x, 2.3) + i + 1), 2)) / pow(i + 1, 2) + 2 * (i + 1) + 3) + pow(x, (i + 1) / 2);
        cout << a[i] << endl;
    }

    float min_val = a[2];
    for (int i = 2; i < num; i+=2) {
        if (a[i] <= min_val) {
            min_val = a[i];
        }
    }

    cout << "\nНайменше значення: " << min_val;    
    
    return 0;
}
