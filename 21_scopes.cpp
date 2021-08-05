#include <iostream>
using namespace std;

/*
Scopes
*/

// global scope
int numGlobal = 3;

int main(){
    int num = 1; // in the scope of the main function.

    {
        // this is the first scope and num can be accessed as both in the main()
        cout << num << endl;
    }

    // the below is commented as it throws an error
    // {
    //     //second scope
    //     int num2 = 2;
    // }
    // // if we try to print the num2, it will not work as we are outside of the scope
    // cout << num2; 
    return 0;
}