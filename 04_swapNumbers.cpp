#include <iostream>
using namespace std;

/* 
Write a C++ Program to Swap Two Numbers without using third variable.
 */


int main(){
    int num1, num2;
    cout << " Enter a Number" << endl;
    cin >> num1;
    cout << " Enter a Number" << endl;
    cin >> num2;
    
    cout << " Before Swapping number 1 is: " << num1 << endl; 
    cout << " Before Swapping number 2 is: " << num2 << endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << " Before Swapping number 1 is: " << num1 << endl; 
    cout << " Before Swapping number 2 is: " << num2 << endl;
    return 0;
    
    
}
