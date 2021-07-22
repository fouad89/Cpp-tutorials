/* C++ program to generate randome number for user */
#include <iostream>
#include <stdlib.h>
using namespace std;

int generateRandom(int numLower, int numUpper){
    return rand() % numUpper + numLower;
}

int main(){
    string play_again;
    int numLower, numUpper;

    do
    {
        cout << "Random Number Generator::" << endl;
        cout << "Lower Limit: " << endl;
        cin >> numLower;
        cout << "Upper Limit" << endl;
        cin >> numUpper;

        cout << "Generated Number: " << generateRandom(numLower, numUpper)<< endl;
        cout << "Would you Like to try again? " << endl;
        cin >> play_again;
    } while(play_again == "Y" || play_again == "y" || play_again == "yes");

    
    return 0;
}