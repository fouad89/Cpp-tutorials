/* C++ Program to calculate sum and average of three numbers */
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    float num1, num2, num3, sum, avg;
    cout << "Sum & Avg of 3 three numbers: " << endl;
    cout << "Enter First Number: " << endl;
    cin >> num1;
    cout << "Enter Second Number: " << endl;
    cin >> num2;
    cout << "Enter Third Number: " << endl;
    cin >> num3;
    sum = num1 + num2 + num3;
    avg = sum / 3;
    cout << "The SUM of your numbers is: " << sum << endl;
    cout << "the Average is: " << avg << endl;

    return 0;
}