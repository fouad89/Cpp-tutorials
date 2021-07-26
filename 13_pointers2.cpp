#include <iostream>
using namespace std;

/* Write a program that asks the user to enter integers as inputs to be stored in the variables
 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. 
Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them. */

int main(){
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;

    cin >> a;
    cin >> b;

    cout << "ptrA Address: " << ptrA <<endl;
    cout << "ptrB Address: " << ptrB << endl;

    cout << "ptrA: " << *ptrA <<endl;
    cout << "ptrB: " << *ptrB << endl;
    return 0;
}