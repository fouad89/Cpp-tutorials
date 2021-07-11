#include <iostream>
using namespace std;

/*
In an expression, prefix unary ∗ means
‘‘contents of’’ and prefix unary & means ‘‘address of.’’

*/

void increment(){
    int v1[10] = {0,1,2,3,4,5,6,7,8,9}; // array with 10 elements
    for (auto& x:v1){ // having x refer to an element instead of copying
        ++x;
        cout << x << '\n';
    }
}

void print(){
    // this function copies the elements into x
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto x:v){
        cout << x << '\n';
    }
}

int main(){

    increment();
    return 0;
}