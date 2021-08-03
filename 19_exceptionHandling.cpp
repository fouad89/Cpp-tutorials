#include <iostream>
using namespace std;

/* Exceptions Handling is used to catch error

try{

    throw int;
} catch (int){
    cout << "something"
}


 */

// Exception handling for a mom and son's age

int main(){
    int sonAge = 40;
    int momAge = 30;
    try
    {
        if (sonAge >= momAge){
            throw 99;
        }
    }
    catch(int x)
    {
        cout << "son cannot be older than mom. Error number " << x << endl;
    }
    
    return 0;
}