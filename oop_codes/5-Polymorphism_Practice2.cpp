#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;

public:
    virtual double calculateSalary() = 0;
    virtual ~Employee() {} //It ensures that when you delete a derived class object through a base class pointer, the derived class destructor is called first, then the base class destructor.

    Employee(string Name)
    {
        name = Name;
    }
};

class FullTimeEmployee : public Employee
{
    double monthlySalary;

public:
    FullTimeEmployee(string Name, double MonthlySalary)
        : Employee(Name)
    {
        monthlySalary = MonthlySalary;
    }

    double calculateSalary() override
    {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee
{
private:
    int hoursworked;
    int payperhour;

public:
    PartTimeEmployee(string Name, int Hoursworked, int Payperhour)
        : Employee(Name)
    {
        hoursworked = Hoursworked;
        payperhour = Payperhour;
    }

    double calculateSalary() override
    {
        return hoursworked * payperhour;
    }
};

int main()
{
    Employee *e1 = new FullTimeEmployee("Kamran", 65460);
    Employee *e2 = new PartTimeEmployee("Ali", 5, 435);

    cout << "The salary of fulltimeemployee is " << e1->calculateSalary() << endl;
    cout << "The salary of parttimeemployee is " << e2->calculateSalary() << endl;

    delete e1;
    delete e2;
}