#include <iostream>
#include <cmath>
using namespace std;
/* Write a C++ program to find the max of an integral data set. 
The program will ask the user to input the number of data values in the set and each value. 
The program prints on screen a pointer that points to the max value. */


int main(){
    int n, i, max=0;
    int *ptr = nullptr;
    cout << "How many values? " << endl;
    cin >> n;
    int arr[n];
    for (i=0; i < n; i++){
        cin >> arr[i];
    }
    for (i=0; i<=n; i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    ptr = &max;
    cout << "The maximum value is: "<<*ptr<<" stored in "<<ptr<<"" << endl; 




    return 0;
}