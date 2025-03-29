#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand (time(NULL));
    setlocale(LC_ALL, "Ukr");
    cout << "+---------------------------------+" << endl;
    cout << "   Лабораторна робота №11          " << endl;
    cout << "         Завдання 1                " << endl;
    cout << "   Вказівники та динамічні масиви  " << endl;
    cout << "+---------------------------------+" << endl;
    
    cout << "\n";

    int* B; // B - вказівник
    int size;

    cout << "Введіть розмір одновимірного масиву: ";
    cin >> size;
    // Виділення пам'яті під масив
    B = new int[size]; 


    cout << "\n";

    cout << "Утворений масив: ";

    for (int i; i < size; i++){
        B[i] = rand() % 25 - 10;
        cout << B[i] << " ";
    }

    cout << "\n";
    cout << "Видозмінений масив: ";

    for (int i = 0; i < size; i++){
        if (B[i] < 0){
            B[i] = 0;
        }
        cout << B[i] << " ";
    }

    delete [] B;

    return 0;
}
