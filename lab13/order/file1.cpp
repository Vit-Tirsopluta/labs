#include <iostream>
#include <cstring> 

using namespace std;

int main() {
    const int SIZE = 1000;
    char text[SIZE];
    cout << "Vvedit text ";
    cin.getline(text, SIZE); 
    char* result = new char[SIZE]; 
    result[0] = '\0';
    char* word = strtok(text, " "); 
    bool found = false;
    while (word != nullptr) {
        if (strcmp(word, "vesna") == 0) {
            strcat(result, "zima"); 
            found = true;
        }
        else {
            strcat(result, word);
        }
        strcat(result, " "); 
        word = strtok(nullptr, " ");
    }

    if (found == true) {
        cout << "Resultat " << result << endl;
    }
    else {
        cout << "Slovo \"vesna\" ne znaydeno. text bez zmin " << endl;
        cout << "Vvedeny text " << result << endl;
    }

    delete[] result; 
    return 0;
}