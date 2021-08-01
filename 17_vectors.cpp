#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* 
* Vectors:Vectors are same as dynamic arrays with the ability to resize itself 
    automatically when an element is inserted or deleted
* Useful functions with vectors: 
    - front();
    - back();
    - begin();
    - end();
    - rbegin();
    - rend();    
    - max_size();
    - capacity();
    - resize();
    - empty();
    - at(n);
 */

int main(){

    vector <string> v;
    // adding elements
    v.push_back("a");
    v.push_back("b");
    // inserting element at the front
    v.insert(v.begin(), "c");

    for (int i=0; i < v.size(); i++){
        cout << "element "<<i<<" is: " << v[i] << endl;
    }
    // using at to find the element at a specific position
    cout << "print element at position 2 (3rd element)"<<v.at(2) << endl;

}