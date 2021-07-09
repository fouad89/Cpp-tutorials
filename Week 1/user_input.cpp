/*Code along from The C++ Programming Language*/

#include <iostream>
using namespace std;


bool accept(){
    char answer = 0;
    cout << "Do you want to proceed (y or n)\n";
    cin >> answer;
    if (answer=='y') return true;
    return false;
}

// accepting answers v2 
// accepting no and n
/* p.44
A switch-statement tests a value against a set of constants. The case constants must be distinct, and
if the value tested does not match any of them, the default is chosen. If no default is provided, no
action is taken if the value doesn’t match any case constant.

*/
bool accept2(){
    char answer=0;
    cout << "Do you want to proceed? ";
    cin >> answer;
   switch (answer)
   {
   case 'y':
       return true;
        break;
    case 'n': return false;
        break;
   
   default:
        cout << "i'll take that as a no \n";
        return false;
       break;
   }
    
}

/*using while loops give a number of tries to user*/

bool accept3(){
    
    int tries = 1;
    int max_tries = 3;
    
    
    while (tries <= max_tries)
    {
        char answer = 0;
        cout << "You have 3 tries to proceed (y or n): \n";
        cin >> answer;
        switch (answer)
        {
            case 'y':
                return true;
            case 'n': return false;
            
            default:
                cout << "Invalid Input, try again please: \n";
                ++tries;
        }

    }
        cout << "I'll take that as a no!\n";
        return false;

}


int main(){
    // first example (uncomment line to see result)
    // cout << accept() << "\n";

    // second example (uncomment line to see result)
    // cout << "improved programme 2: " << accept2() << "\n";

    // third example (uncomment line to see result)
    cout << "Improved Programme 3: " << accept3() << "\n";
    return 0;


}