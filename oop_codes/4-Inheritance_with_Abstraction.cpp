// Base class also known as super class or parent class
// Derived class also known as sub class or child class

// Accessing the members of base class is called Inheritance

#include<iostream>
using namespace std;

class Promotion{
    virtual void AskforPromotion()=0;
};



class Employee:Promotion{ 

protected: //It allows access to dervied class but not main function
string Name;
string Company;
int Age;

public:
Employee(string name,string company,int age){
    Name=name;
    Company=company;
    Age=age;
}

void AskforPromotion(){
    if(Age>30)
    cout<<"Promoted"<<endl;
    else
    cout<<"Not Promoted"<<endl;
}
};

class Developer:public Employee{  //Developer is child class & Employee is parent class
 public:
 string FavProgrammingLanguage;
Developer(string name,string company,int age,string favProgrammingLanguage)
:Employee(name,company,age)
{
FavProgrammingLanguage=favProgrammingLanguage;
}

void FixBug(){
    cout<<Name<<" fix bug using "<<FavProgrammingLanguage<<endl;
}
};

class Teacher:public Employee{
    public:
    string Subject;

    void PreparedLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }

    Teacher(string name,string company,int age,string subject)
    :Employee(name,company,age)
    {
        Subject=subject;
    }
};
int main(){
 Developer d=Developer("Kamran","FLASH",54,"C++");
 d.FixBug();
 d.AskforPromotion();

 Teacher t=Teacher ("Syed Ahmed","FAST",54,"PF");
 t.PreparedLesson();
 t.AskforPromotion();
}