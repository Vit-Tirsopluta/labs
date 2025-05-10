#include <cmath>
#include <cstddef>
#include <iostream>
#include <string.h>
using namespace std;

//void TaskOne();
void TaskTwo();


int main() {
  setlocale(LC_ALL, "Ukr");
  
  //TaskOne();
  TaskTwo();

  return 0;
}


/* void TaskOne(){
  cout << "+---------------------------------------+" << endl;
  cout << "           Лабораторна робота №13        " << endl;
  cout << "  Робота зі стрічками. Масиви типу char. " << endl;
  cout << "+---------------------------------------+" << endl;

  cout << "\nЗавдання 1" << endl;

  char text[100];
  cout << "Введіть текст: ";
  cin.getline(text, 100);
  char *word = strtok(text, " ");
  while (word != NULL) {
    if (strlen(word) > 5) {
      cout << word << " ";
    }
    word = strtok(NULL, " ");
  }
}  */

void TaskTwo(){
  cout << "\n\nЗавдання 2" << endl;

  char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int count[52] = {0};
  char *p = alphabet;
  char text[100];
  cout << "Введіть текст: ";
  cin.getline(text, 100);
  char *word = strtok(text, " ");
  while(word != NULL){
    for(int i = 0; i < strlen(word); i++){
        for(int j = 0; j < strlen(alphabet); j=j+1){
            if(word[i] == alphabet[j]){
                count[j]++;
                break;
            }
        }
    }
    word = strtok(NULL," ");
  }
  int min = count[0];
  int max_index = 0;
  for(int i = 0; i < strlen(alphabet); i=i+1){
    if(count[i] >= 1){
      if(count[i] < min){ 
         min = count[i];
         max_index = i;
      }
      cout << alphabet[i] << " = " << count[i] << endl;
    }
  }
  cout << "Найменш повторювана літера: " << alphabet[max_index] << endl;
}