#include <iostream>
#include <map>
using namespace std;

/* 
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.
Each student can have multiple answer sheets.So the teacher has Q queries:

1 X Y :Add the marks Y to the student whose name is X.

2 X: Erase the marks of the students whose name is X.

3 X: Print the marks of the students whose name is X. (If X didn't get any marks print .)
 */

/* 
sudo code:
q is the number of queries
type is the type of query which is going to be 1, 2 or 3
if the type is 1, then Add the marks Y to the student whose name is X
else if the type is 2, then Erase the marks of the students whose name is X.
else if the type is 3, Print the marks of the students whose name is X. (If X didn't get any marks print .)
 */

int main(){
    int q, type, mark;
    cin >> q;
    map<string, int> class_;
    string name;
    for (int i = 0; i < q; i++){
        cin >> type >> name; //input type first, then student name
        if (type == 1){
            cin >> mark ;
            class_[name] += mark;

        } else if (type == 2)
        {
            class_.erase(name);
            
        } else if (type == 3)
        {
            cout << class_[name] << endl; 
        } 

    }
    return 0;
}