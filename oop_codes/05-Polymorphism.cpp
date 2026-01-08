// The ability of an object or method to have many forms
// The most common use of polymorphism is when a parent class reference is used to refer to a child class object

#include <iostream>
using namespace std;

class Employee {

protected: // It allows access to dervied class but not main function
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    virtual void work()
    {
        cout << Name << " is checking email" << endl;
    }
};

class Developer : public Employee
{ // Developer is child class & Employee is parent class
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void work()
    {
        cout << Name << " is writing code" << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;

    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void work()
    {
        cout << Name << " is teaching the " << Subject << endl;
    }
};
int main()
{
    Developer d = Developer("Kamran", "FLASH", 54, "C++");
    Teacher t = Teacher("Syed Ahmed", "FAST", 54, "PF");

    //  d.work();
    //  t.work();

    Employee *e1 = &d; // Pointer of base class can hold reference to derived class object
    Employee *e2 = &t;

    e1->work(); // -> used when we want to access members using a pointer
    e2->work();

    
}