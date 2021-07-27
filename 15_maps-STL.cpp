#include <iostream>
#include <map>
using namespace std;

/* 
Maps are used to store key, value pairs
 */

int main(){
    // declare a map: map <key_type, data_type>
    map <string, int> m; // declaring an m map with key_type: string, and value int
    // insert a pair
    m.insert(make_pair("first", 1));
    
    cout << "After adding first element, the size is: "<< m.size() << endl; // get the size of the map
    // insert second pair
    m.insert(make_pair("Second", 2));
    m.insert(make_pair("Third", 3));

    cout <<"After adding 2 more lements, the size is: " << m.size() << endl;
    // removing an element
    m.erase("Second");
    cout <<"After removing second element, the size is: " << m.size() << endl;

    // finding an element
    map<string,int>::iterator itr = m.find("Third");

    // accessing values
    cout << "The third element: " << m["Third"] << endl;


    return 0;
}