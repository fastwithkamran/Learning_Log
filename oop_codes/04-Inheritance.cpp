// Base class also known as super class or parent class
// Derived class also known as sub class or child class

// Accessing the members of base class is called Inheritance

#include<iostream>
using namespace std;

class Employee{ 

protected: //It allows access to dervied class but not main function
string Name;
string Company;
int Age;

Employee(string name,string company,int age){
    Name=name;
    Company=company;
    Age=age;
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

int main(){
 Developer d=Developer("Kamran","FLASH",54,"C++");
 d.FixBug();
 d.FixBug();
}