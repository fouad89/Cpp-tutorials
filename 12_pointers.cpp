#include <iostream>
#include <cmath>
using namespace std;

/*
A pointer is used to refere to the memory location of a variable. when a variable is proceeded 
by &, the memory address is retrieved. to get the value from that memory address,
the variable is proceeded with a *

. They are used whenever a function needs to modify the content of a variable,
 but it does not have ownership.


 Function Description

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, 
so there is no value to return. Modify the values in memory so that a contains their sum and
b contains their absoluted difference.
*/

void action(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);

}
int main(){
    int a, b;
    int *pa = &a;
    int *pb = &b;

    scanf("%d %d", &a, &b);
    action(pa, pb);
    cout << a << endl;
    cout << b << endl;

    return 0;
}