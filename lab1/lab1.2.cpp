#include<math.h>
#include<iostream>

float U,I,R;

int main(){
    setlocale(LC_ALL, "Ukraine");
    using namespace std;
    //формула I=R/U
    cout << "Введіть значення R(Ом):";
    cin >> R;
    cout << "Введіть значення U(В):";
    cin >> U;
    I=R/U;
    cout << "I=" << I << "А";
}