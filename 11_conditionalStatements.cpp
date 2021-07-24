/* Given a positive integer n, do the following:

If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n>9, print Greater than 9.
 */

#include <iostream>
#include <iomanip>


using namespace std;



int main()
{


    int n;
    cout << "Enter a number to get the word value: " << endl;

    cin >> n;
    string numbers[10] = {"Greater than 9 ","one" ,"two" ,"three",
                        "four" ,"five" ,"six" ,"seven","eight","nine"};

    // conditionals   
    if (n > 9){
        cout << numbers[0] << endl;
    } else if (1 <= n << 9){
        cout << numbers[n] << endl;
    }
    return 0;
}

