#include <iostream>
#include <vector>
using namespace std;

/* You will be given an array of N integers and you have to print the integers in the reverse order.

 */

int main(){
    int N, entry;
    cin >> N;
    vector <int> v;
    for (int i=0; i < N; i++){
        cin >> entry;
        v.push_back(entry);
    }

    // printing out in reverse
    for (int i = N - 1 ; i >= 0; i--){
        cout << v[i] << " " ;
    }
    return 0;
}