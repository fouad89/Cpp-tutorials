#include <iostream>
using namespace std;



int main(){
    int v1[10] = {0,1,2,3,4,5,6,7,8,9}; // array with 10 elements
    int v2[10];
    for (auto i=0; i!=10; ++i){
        v2[i] = v1[i];
    }
    return 0;
}