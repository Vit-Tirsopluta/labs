#include <iostream>
#include <ctime>
using namespace std;

int main(){
    setlocale (LC_ALL, "Ukr");
    srand (time(NULL));
    cout << "+---------------------------------+" << endl;
    cout << "   Лабораторна робота №11          " << endl;
    cout << "         Завдання 2                " << endl;
    cout << "   Вказівники та динамічні масиви  " << endl;
    cout << "+---------------------------------+" << endl;

    cout << "\n";

    int **B; // B - вказівник на вказівник
    int raws;
    int columns;

    // Введення кількості рядків та стовпців
    cout << "Введіть кількість рядків: ";
    cin >> raws;
    cout << "Введіть кількість стовпців: ";
    cin >> columns;

    // Виділення пам'яті для масиву вказівників
    B = new int*[raws];

    // Виділення пам'яті для масиву та його заповнення
    for(int i = 0; i < raws; i++){
        B[i] = new int[columns];
        for (int j = 0; j < columns; j++){
            B[i][j] = rand() % 25 - 10;
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // Пошук максимального елементу у кожному рядку
    for(int j = 0; j < columns; j++){
        int max_num = B[0][j];
        for (int i = 0; i < raws; i++){
            if (B[i][j] > max_num){
                max_num = B[i][j];
            }
        }
        cout << "Максимальний елемент у стовпці " << j << " = " << max_num << endl;
    }

    // Звільнення пам'яті
    for (int i = 0; i < raws; i++){
        delete [] B[i];
    }
    // Видалення масиву
    delete [] B;
    return 0;
}