/* C++ Program to Find Size of int, float, double and char */

#include <iostream>
using namespace std;

int main(){

    int numInt;
    float numFloat;
    double numDouble;
    char charachter;

    cout << "The size of int is: " << sizeof(numInt) << endl;
    cout << "The size of float is: " << sizeof(numFloat) << endl;
    cout << "The size of double is: " << sizeof(numDouble) << endl;
    cout << "The size of char is: " << sizeof(charachter) << endl;

    return 0;
}