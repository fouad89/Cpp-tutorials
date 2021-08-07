#include <iostream>
using namespace std;
/* linked lists are not organized one after the other, 
need to link the elements of the list 
each element stores two things, the first thing is the value of the element
the second is the point to the next element.
If it is the last element, it points to null 

//
difference between arrays and linked lists:
arrays have fixed size while linked lists don't

// 
disadvantages:
1. random access to elements is not allowed in the linked list.
for example, the fourth element's position in memory is only known by the 
previous value.
2. Linked lists require more memory
*/

class Node{
    // each element has an int value and pointer
public:
    int Value;
    Node* Next; 
};
int main(){

    return 0;
}