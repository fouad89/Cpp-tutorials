/* C++ Program to Find ASCII Value of a Character */
#include <iostream>
using namespace std;

/* 
A character variable holds ASCII value
 (an integer number between 0 and 127) rather than that character itself in C programming. 
That value is known as ASCII value.

For example, ASCII value of ‘A’ is 65.

What this means is that, if you assign ‘A’ to a character variable,
 65 is stored in that variable rather than ‘A’ itself. 
 */

int getASCI(char c){

    return int(c);
}

int main(){
    char c;
    cout << "Enter a charchter: " << endl;
    cin >> c;
    cout << "The ASCI value of ["<< c <<"] is: " << getASCI(c) << endl; 



    return 0;
}