#include <iostream>
using namespace std;

// the class is like a blueprint to create multiple 
class Employee {
public:
    string Name, Company;
    int Age;

    // modifiers & methods
    void Introduce() {
        cout << "Hello, my name is : " << Name << "\n";
        cout << "I work for  : " << Company << "\n";
    }
};



int main(){
    // creating an object/ instanc
    Employee employee1;

    employee1.Name = "John";
    employee1.Company = "Apple";
    employee1.Age = 30;

    employee1.Introduce();

    return 0;
}