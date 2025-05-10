#include <ctime>
#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

template <class T> void CreateArray(T (&arr)[5][5]);
template <class T> void PrintArray(T (&arr)[5][5]);
template <class T> T MaxElementLowDiagonal(T (&arr)[5][5]);

int main() {
  setlocale(LC_ALL, "Ukrainian");

  bool exit = false;
  int number;

  while (!exit) {
    cout << "Виберіть пункт меню:" << endl;
    cout << "\t1. Згенерувати масив типу int.\n";
    cout << "\t2. Згенерувати масив типу float.\n";
    cout << "\t3. Вийти з програми.\n";
    cin >> number;
    switch (number) {
    case 1: {
      int arr[5][5];
      CreateArray(arr);
      cout << "Початковий масив:\n";
      PrintArray(arr);
      cout << "\nМаксимум під побічною діагоналлю: " << MaxElementLowDiagonal(arr) << "\n";
      cout << "\nМасив після обміну рядка та стовпця:\n";
      PrintArray(arr);
      break;
    }
    case 2: {
      float arr[5][5];
      CreateArray(arr);
      cout << "Початковий масив:\n";
      PrintArray(arr);
      cout << "\nМаксимум під побічною діагоналлю: " << MaxElementLowDiagonal(arr) << "\n";
      cout << "\nМасив після обміну рядка та стовпця:\n";
      PrintArray(arr);
      break;
    }
    case 3: {
      exit = true;
      break;
    }
    default: {
      cout << "Невірний вибір. Спробуйте ще раз.\n";
      break;
    }
    }
  }

  return 0;
}

template <class T> void CreateArray(T (&arr)[5][5]) {
  srand(time(0));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      arr[i][j] = -5 + (static_cast<float>(rand()) / RAND_MAX * 20);
    }
  }
}

template <class T> void PrintArray(T (&arr)[5][5]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << fixed << setprecision(2) << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

template <class T> T MaxElementLowDiagonal(T (&arr)[5][5]) {
  T MaxElements, rows[5], cols[5];
  int rowsElements = 0, colsElements = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i + j > 4) {
        if (MaxElements < arr[i][j]) {
          MaxElements = arr[i][j];
          rowsElements = i;
          colsElements = j;
        }
      }
    }
  }
  for (int i = 0; i < 5; i++) {
    rows[i] = arr[rowsElements][i];
    cols[i] = arr[i][colsElements];
  }
  for (int i = 0; i < 5; i++) {
    arr[rowsElements][i] = cols[i];
    arr[i][colsElements] = rows[i];
  }
  return MaxElements;
}