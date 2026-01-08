// Encapsulation idea of bundling data or the methods of groupin gthe data. TO preventing any class to access our data directly--getters and setters

// Definition:
// Encapsulation is protecting the internal data or mechanics of an object and allowing access only through controlled operations.

// Example (TV Remote):

// The TV has internal wiring, circuits, and voltage (private).

// You cannot touch the wires directly.

// You can only use the buttons to change channels, adjust volume, or turn the TV on/off.

// The buttons are controlled ways to access and modify the TV’s state.

#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    { // Setter Method
        Name = name;
    }

    string getName()
    { // Getter Method
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getcompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if(age>18) //Only assigning if this condition came true
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void IntroduceYourself()
    {
        cout << "Name- " << Name << endl;
        cout << "Company- " << Company << endl;
        cout << "Age- " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1=Employee("Kamran","Flash",19);
    employee1.IntroduceYourself();

    Employee employee2=Employee("Ayaz","FAST",40);
    employee2.IntroduceYourself();

    employee1.setName("Rayyan");
    employee1.setAge(9);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;
}
