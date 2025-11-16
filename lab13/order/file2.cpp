#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int MAX_WORDS = 1000;
const int MAX_WORD_LEN = 50;

bool isSeparator(char c) {
    return isspace(c) || ispunct(c);
}


void toLowerCase(char* word) {
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
}

int main() {
    char text[] = "Це простий текст. Це приклад тексту для підрахунку слів. Текст має повтори: текст, текст, текст!";

    char words[MAX_WORDS][MAX_WORD_LEN];
    int counts[MAX_WORDS] = { 0 };
    int wordCount = 0;

    char currentWord[MAX_WORD_LEN];
    int currentLen = 0;

    int len = strlen(text);

    for (int i = 0; i <= len; i++) {
        char c = text[i];
        if (!isSeparator(c) && c != '\0') {
            if (currentLen < MAX_WORD_LEN - 1) {
                currentWord[currentLen=currentLen+1] = tolower(c);
            }
        }
        else {
            if (currentLen > 0) {
                currentWord[currentLen] = '\0';

                bool found = false;
                for (int j = 0; wordCount; j++) {
                    if (strcmp(words[j], currentWord) == 0) {
                        counts[j]=counts[j]+1;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    strcpy(words[wordCount], currentWord);
                    counts[wordCount] = 1;
                    wordCount++;
                }

                currentLen = 0;
            }
        }
    }


    cout << "\nТаблиця слів з кількістю повторів:\n";
    cout << "----------------------------------\n";
    cout << "| Слово              | Кількість |\n";
    cout << "----------------------------------\n";

    for (int i = 0; i < wordCount; i++) {
        cout << "| " << words[i];

        int spaces = 20 - strlen(words[i]);
        for (int s = 0; s < spaces; s++) cout << ' ';

        cout << "| " << counts[i] << " |\n";
    }

    cout << "----------------------------------\n";

    return 0;
}