#include <iostream>
#include <string>

using namespace std;

void Task1();
void Task2();
void Task3();
void Task4();

int main() {
  setlocale(LC_ALL, "Ukr");
  cout << "+---------------------------------------+" << endl;
  cout << "           Лабораторна робота №14        " << endl;
  cout << "      Робота зі стрічками. Тип string.   " << endl;
  cout << "+---------------------------------------+" << endl;

  Task1();
  Task2();
  Task3();
  Task4();

  return 0;
}

void Task1(){
  cout << "\ntask 1" << endl;
  
  string sentence = "I'm here to learn how string works actually. I did it by myself.";

  int count_words = 1;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ')
      count_words++;
  }

  cout << sentence << endl;
  cout << "Кількість слів: " << count_words << endl;
}

void Task2(){
  cout << "\ntask 2" << endl;

  string sentence = "I'm here to learn how string works actually. I did it by myself.";

  int count_a = 0;

  size_t LastSpace = sentence.find_last_of(' ');
  string LastWord = sentence.substr(LastSpace + 1);

  for (int i = 0; i < LastWord.length(); i++) {
    if (LastWord[i] == 'a')
      count_a++;
  }
  cout << "Останнє слово: " << LastWord << endl;
  cout << "Кількість літер 'а' в останньому слові: " << count_a << endl;
}

void Task3(){
  cout << "\ntask 3" << endl;

  string sentence = "I'm here to learn how string works actually. I did it by myself.";
 
  int count_words = 0;
  bool FirstLetter = true; //! true для того, щоб врахувало перше слово

  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ') { //! тут FirstLetter не проходить перевірку, тому спочатку він вкзаний true
      FirstLetter = true;
    } 
    else {
      if (FirstLetter && tolower(sentence[i]) == 'b') { //* спочатку FirstLetter = true, далі - false
        count_words++;
      }
      FirstLetter = false; //* false щоб не перевіряло кожну літеру, якщо вона не початкова
    }
  }

  cout << "Кількість слів, що починаються з 'b': " << count_words << endl;
}

void Task4(){
  cout << "\ntask 4" << endl;

  string sentence = "I'm here to learn how string works actually. I did it by myself.";

  int count_same_letters = 0;
  string word = "";

  for (int i = 0; i <= sentence.length(); i++) {
    char c = sentence[i];

    if (isalpha(c) || c == '\'') { // якщо це літера — додаємо до слова
      word += c;
    } 
    else if (!word.empty()) { // якщо пробіл або кінець рядка — обробляємо слово
      if (tolower(word[0]) == tolower(word[word.length() - 1])) {
        count_same_letters++;
        cout << "Збіг: " << word << endl;
      } 
      else {
        cout << "Не збігається: " << word << endl;
      }
      word = ""; // очищуємо слово
    }
  }

  cout << "\nКількість слів з однаковим першим і останнім символом: " << count_same_letters << endl;
}