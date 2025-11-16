#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct person {
    string name;
    int age;
};

void info_about_car();
void print_form_file();
void check_number();
struct car_info;

string filename = "info.txt";

int main() {
    bool cycle = true; 
    int k = 0;
    while (cycle) {
        cout << "Виберіть пункт меню:" << endl;
        cout << "\t1. Додати інформацію про власника і авто." << endl;
        cout << "\t2. Вивести всіх власників і дані їхніх авто." << endl;
        cout << "\t3. Знайти інформацію за номером." << endl;
        cout << "\t4. Вихід з програми." << endl;
        cout << "\t5. Очистити файл." << endl;

        cin >> k;
        cin.ignore();
        switch (k) {
            case 1: {
                info_about_car();
                break;
            }
            case 2: {
                print_form_file();
                break;
            }
            case 3: {
                check_number();
                break;
            }
            case 4: {
                cycle = false;
                break;
            }
            case 5: {
                remove(filename.c_str());
                break;
            }
            default: {
                cout << "Такого пункту не існує" << endl;
                break;
            }
        }
    }
    return 0;
}

struct car_info {
    string surname, marka, color, number;
};

void info_about_car() {
    car_info owner;
    ofstream fout(filename, ios::app);
    cout << "\nВведіть прізвище: ";
    getline(cin, owner.surname);
    cout << "\nВведіть марку авто: ";
    getline(cin, owner.marka);
    cout << "\nВведіть колір авто: ";
    getline(cin, owner.color);
    cout << "\nВведіть номер авто: ";
    getline(cin, owner.number);

    fout << owner.surname << endl;
    fout << owner.marka << endl;
    fout << owner.color << endl;
    fout << owner.number << endl;

    fout.close();
}

void print_form_file() {
    car_info owner;
    ifstream fin(filename);
    while (getline(fin, owner.surname)) {
        getline(fin, owner.marka);
        getline(fin, owner.color);
        getline(fin, owner.number);

        cout << "Прізвище власника: " << owner.surname << endl;
        cout << "Марка авто: " << owner.marka << endl;
        cout << "Колір авто: " << owner.color << endl;
        cout << "Номер авто: " << owner.number << endl;
        cout << "------------------------" << endl;
    }

    fin.close();
}

void check_number() {
    cout << "Введіть дві перші цифри/літери номера авто: ";
    string number;
    getline(cin, number);
    car_info owner;
    ifstream fin(filename);
    while (getline(fin, owner.surname)) {
        getline(fin, owner.marka);
        getline(fin, owner.color);
        getline(fin, owner.number);
        if (owner.number[0] == number[0] && owner.number[1] == number[1]) {
            cout << "Прізвище власника: " << owner.surname << endl;
            cout << "Марка авто: " << owner.marka << endl;
            cout << "Колір авто: " << owner.color << endl;
            cout << "Номер авто: " << owner.number << endl;
            cout << "------------------------" << endl;

            ofstream fout("record.txt");
            fout << owner.surname << endl;
            fout << owner.marka << endl;
            fout << owner.color << endl;
            fout << owner.number << endl;

            fout.close();
            cout << "Інформація успішно внесена у новий файл!" << endl;
        }
    }

    fin.close();
}
