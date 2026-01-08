#include <iostream>
using namespace std;
class Employee //classes
{ // Is a blueprint
  // attributes
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() //Method
    {
        cout << "Name- " << Name << endl;
        cout << "Company- " << Company << endl;
        cout << "Age- " << Age << endl;
    }
    Employee(string name, string company, int age) // Constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee1 = Employee("Kamran", "Flash", 19); //Object employee1
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Super", "Amazon", 46);
    employee2.IntroduceYourself();
}

/*Access Modifiers
private means not accessible outside your class
public means can be accessed outside of the class
protected means inbetween private and public. It has some rules*/

// behaviour can be describe by methods

// default constructor autmoatically generate by the compiler

// constructor is just a method which has no return type
// constructor does not have void or any data type but of the same name as the class
// constructor needs to be public any other than exceptional case s

// pillars of OOP
// Encapsulation
// Abstraction
// Inheritance
// Polymorphism