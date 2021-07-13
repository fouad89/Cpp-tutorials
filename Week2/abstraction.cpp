#include <iostream>
using namespace std;

/*
Abstraction: hidden complexity
*/
// 

class AbstractEmployee{
    // virtual makes it mandotary to provide the function below
    virtual void AskForPromotion() = 0; // pure virtual function
};

// adding abstract
class Employee: AbstractEmployee {
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

    void AskForPromotion(){
        if(Age >30){
            cout << Name << " got promoted" << endl;
        }else{
            cout << Name << " no promotion" << endl;
        }

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
    cout << employee1.getName()<< " is  "  << employee1.getAge()<< endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();
    return 0;
}