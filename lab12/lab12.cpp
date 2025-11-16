#include <iostream>
#include <cmath>
using namespace std;

void Sallary(float &sal);
float Tax(float &sal);
float PensionFund(float &sal);
float SocialSecurity(float &sal);

int main(){
    setlocale(LC_ALL, "Ukr");
    cout << "+--------------------------------+" << endl;
    cout << "     Лабораторна робота №12       " << endl;
    cout << "      Побудова підпрограм         " << endl;
    cout << "+--------------------------------+" << endl;

    float sal, tax, pensionFund, socialSecurity, finalSallary;

    Sallary(sal);
    tax = Tax(sal);
    pensionFund = PensionFund(sal);
    socialSecurity = SocialSecurity(sal);
    finalSallary = sal - tax - pensionFund - socialSecurity;
    
    cout << "Your final sallary is: " << finalSallary << endl;

    return 0;
}

void Sallary(float &sal){
    cout << "Enter your salary: ";
    cin >> sal;
}

float Tax(float &sal){
    return sal * 0.13;
}

float PensionFund(float &sal){
    return sal* 0.02;
}

float SocialSecurity(float &sal){
    return sal * 0.01;
}