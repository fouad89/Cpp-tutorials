#include <iostream>
using namespace std;


/* 
Polymorphism ; a class or object that takes multiple
forms. parent class reference is used to refer to
an object of a child class.
 */

class AbstractEmployee{
    // virtual makes it mandotary to provide the function below
    virtual void AskForPromotion() = 0; // pure virtual function
};

class Employee:AbstractEmployee {
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
    // virtual function checks for functions with same name in the child class
    // if such function exists, then execute that of the child class
    virtual void Work(){
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;

    }

    // constructors
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;


    }
};



// this class inherits from employee
/* 
in order to use parent methods outside of the child class, 
we make the inheritence public 
*/
class Developer: public Employee {
public:
    string FavLanguage;
    // creating constructors
    /* 
    rules of constructors: 
    1.has to be void
    2.has the same name as the class 
    3.has to be pulbic 
    */
   // since there is already a constructor in the parent class
   void fixBug(){
       cout << getName() << " fixed bug using " << FavLanguage << endl;
   }
   Developer(string name, string company, int age, string favLanguage)
    :Employee(name, company, age) {
       FavLanguage = favLanguage;
   }
    void Work(){
        cout << getName() << " is checking code on " << FavLanguage << endl;

    }
};

class Teacher: public Employee {
public:
    string Subject;

    void prepareLesson() {
        cout << getName() << " is preparing for " << Subject << endl;
    }

    void Work(){
        cout << getName() << " is teaching " << Subject << endl;

    }

    // constructor
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company,age){
        Subject = subject;
    }

};

int main(){
    // // creating an object/ instanc
    // Employee employee1 = Employee("John", "Apple", 25);
    // employee1.Introduce();
    // // Second object
    // Employee employee2 = Employee("Adam", "Amazon", 35);
    // employee2.Introduce();

    Developer d= Developer("Jay", "Apple", 32, "C++");
    
    // Teacher class
    Teacher t = Teacher("Ahmed", "Cork", 35, "Physics");

    // pointer 
    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2 ->Work();

    
    return 0;
}