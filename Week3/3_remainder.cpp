#include <iostream>
using namespace std;

/* 
Write a C++ Program to Find Quotient and Remainder of 2 numbers
 */

double quotient(int num1, int num2){
    return num1 % num2;
}

int main(){
    double num1, num2;
    cout << " Enter a Number" << endl;
    cin >> num1;
    cout << " Enter a Number" << endl;
    cin >> num2;
    cout << "Remainder is: " << quotient(num1, num2) << endl; 

    return 0;
}