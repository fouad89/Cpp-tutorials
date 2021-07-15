#include <iostream>
using namespace std;
/*
Inheritence: a super class and a child class. the parent class has certian
members and attributes. The child class inherits from parent class as in
have the same members and attrs from the parent class 

an example: a car class would be a parent class and electrical car 
would be the child. 
*/

class AbstractEmployee{
    // virtual makes it mandotary to provide the function below
    virtual void AskForPromotion() = 0; // pure virtual function
};

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
};

class Teacher: public Employee {
public:
    string Subject;

    void prepareLesson() {
        cout << getName() << " is preparing for " << Subject << endl;
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
    d.fixBug();
    d.AskForPromotion();
    
    // Teacher class
    Teacher t = Teacher("Ahmed", "Cork", 35, "Physics");
    t.prepareLesson();
    t.AskForPromotion();
    
    return 0;
}