#include <iostream>
using namespace std;

/* 
In this challenge, the task is to debug the code to successfully 

Code should handle std::invalid_argument exception properly.
More specifically, you have to extend the implementation of process_input function. 
It takes integer n as an argument and has to work as follows:

1. It calls function largest_proper_divisor(n).
2. If this call returns a value without raising an exception, 
        it should print in a single line result=d where d is the returned value.
3. Otherwise, if the call raises a std::invalid_argument exception, 
    it has to print in a single line the string representation of the raised exception, i.e. its message.
3.Finally, no matter if the exception is raised or not, it should print in a single line 
    returning control flow to caller after any other previously printed output.
To keep the code quality high, you are advised to have exactly one line printing returning control flow to caller in the body of process_input function.

 */

int largest_proper_divisor(int n){
    int max = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0)
        {
            if (i > max){
                max = i;
            }
        }
        
    }
    return max;
}

int main(){
    int userInput;
    cin >> userInput;
    cout << "Biggest divisor: " << largest_proper_divisor(userInput) << endl;    
    return 0;
}