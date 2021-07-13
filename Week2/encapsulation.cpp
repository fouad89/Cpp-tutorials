#include <iostream>
using namespace std;

/*Encapuslation: the idea of grouping data together in 
methods that operate on those data.

to prevent anything outside the class to interact and modify the data
*/
// the class is like a blueprint to create multiple 
class Employee {
private: // can only be accessed through the class.
    string Name, Company;
    int Age;

public:
    // modifiers & methods
    void Introduce() {
        cout << "Hello, my name is : " << Name << "\n";
        cout << "I work for  : " << Company << "\n";
        cout << "I am " << Age << " years old\n";
    }
    // getters and setters
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    } 
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        // settign a checker or rules.
        if(age >=18 ){
            Age = age;
        }
    }
    int getAge(){
        return Age;
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


    // calling getters and setters
    employee1.setAge(25);
    cout << employee1.getName()  << employee1.getAge();
    return 0;
}