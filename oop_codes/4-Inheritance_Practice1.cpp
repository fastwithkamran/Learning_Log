#include <iostream>
using namespace std;

class Student
{

protected:
    string name;
    int age;

public:
    void displayInfo()
    {
        cout << name << " is " << age << " years old" << endl;
    }

    Student(string Name, int Age)
    {
        name = Name;
        age = Age;
    }
};

class GraduateStudent : public Student
{
private:
    string thesisTitle;

public:
    GraduateStudent(string Name, int Age, string ThesisTitle)
        : Student(Name, Age)
    {
        thesisTitle = ThesisTitle;
    }

    void displayInfo()
    {
        Student::displayInfo(); // call base version
        cout << "The title of thesis is " << thesisTitle << endl;
    }
};

int main()
{
    Student s1 = Student("Kamran", 19);
    s1.displayInfo();

    GraduateStudent s2 = GraduateStudent("Ali", 32, "I am Learning OOP");
    s2.displayInfo();
}