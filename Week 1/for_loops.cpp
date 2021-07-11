#include <iostream>
using namespace std;

// using range-for statement

void print(){
    int v[] = {0,1,2,3,4,5,6,7,8,9};;
    for (auto x:v){
        cout << x << '\n';
    }

    for (auto x: {10,5,4,3,1}){
        cout << x << '\n';
    }
}


int main(){
    int v1[10] = {0,1,2,3,4,5,6,7,8,9}; // array with 10 elements
    int v2[10];
    // copying v1 into v2
    for (auto i=0; i!=10; ++i){
        v2[i] = v1[i];
    }

    cout << v2[1];

    print();

    return 0;
}