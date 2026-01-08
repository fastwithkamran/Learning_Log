#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    Student(string Name, int Marks = 0)
    {
        if (Marks >= 0 && Marks <= 100)
        {
            name = Name;
            marks = Marks;
        }
        else
        {
            name = Name;
            marks = 0;
        }
    }

    void addMarks(int m)
    {
        if ((marks + m) <= 100)
        {
            marks += m;
        }
        else
            cout << "Marks cannot exceed 100" << endl;
    }

    void deductMarks(int m)
    {
        if ((marks - m) >= 0)
        {
            marks -= m;
        }
        else
            cout << "Marks cannot decreased 0" << endl;
    }

    int getmarks()
    {
        return marks;
    }
};

int main()
{
    Student s1 = Student("Kamran", 100);
    Student s2 = Student("Ayaz");

    s1.addMarks(30);
    s2.addMarks(110);
    s2.addMarks(11);

    s1.deductMarks(23);
    s2.deductMarks(55);

    cout << "Marks are: " << s1.getmarks() << endl;
    cout << "Marks are: " << s2.getmarks() << endl;
}