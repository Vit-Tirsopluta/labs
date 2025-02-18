#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Ukr");
    cout << "\t\t Лабораторна робота №9" << endl;
    cout << "Завдання 1: Пошук чисел, які зустрічаються більше одного разу \n"; 
    cout << "в одновимірному масиві А, що містить 30 елементів" << endl;

    const int size = 30;
    int A[size];

    for (int i = 0; i < size; ++i)
    {
        A[i] = rand() % 20;
    }

    cout << "\nЗгенерований масив: " << endl;
    for (int i = 1; i <= size; ++i)
    {
        cout << A[i-1] << "\t";
        if (i % 5 == 0)
        {
            cout << "\n";
        }
        
    }
    cout << endl << endl;

    cout << "Числа що повторюються:" << endl;
    bool foundDuplicate = false;
    for (int i = 0; i < size; ++i)
    {
        bool isDuplicate = false;

        for (int k = 0; k < i; ++k)
        {
            if (A[i] == A[k])
            {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
        {
            continue;
        }

        for (int j = i + 1; j < size; ++j)
        {
            if (A[i] == A[j])
            {
                isDuplicate = true;
                foundDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
        {
            cout << A[i] << " ";
        }
    }

    if (!foundDuplicate)
    {
        cout << "Немає чисел, які зустрічаються більше одного разу.";
    }

    return 0;
}