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
        cout << "I am " << Age << " years old\n";
    }
    // constructors
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;


    }
};



int main(){
    // creating an object/ instanc
    Employee employee1 = Employee("John", "Apple", 25);
    employee1.Introduce();
    // Second object
    Employee employee2 = Employee("Adam", "Amazon", 35);
    employee2.Introduce();

    return 0;
}