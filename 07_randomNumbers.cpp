/* C++ program to generate random numbers */
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int r1, r2, r3;
    r1 = rand() % 100; // a random number between 0-99
    r2 = rand() % 10 + 1; // a random number between 1 - 10
    r3 = rand() % 20 + 2000; // a random number between 2000 - 2019

    cout << "Random number between 0-99: " << r1 << endl;
    cout << "Random number between 1 - 10: " << r2 << endl;
    cout << "random number between 2000 - 2019: " << r3 << endl;

    return 0;
}

