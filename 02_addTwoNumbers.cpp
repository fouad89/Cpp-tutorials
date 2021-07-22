#include <iostream>
using namespace std;

/* 
Write a C++ Program to C++ Program to Add Two Numbers.
 */

double addNumbers(double num1, double num2){

    return num1 + num2;
}

int main(){
    double num1, num2;
    cout << " Enter first number: " << endl;
    cin >> num1;
    cout << " Enter second number: " << endl;
    cin >> num2;

    cout << "Result: " << addNumbers(num1, num2) << endl;

    return 0;
}