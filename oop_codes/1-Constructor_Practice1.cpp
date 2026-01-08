#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    double gpa;

   void bio(){
        cout<<"Name- "<<name<<endl;
        cout<<"GPA- "<<gpa<<endl;
    }

    Student(string Name,double Gpa){
        this->name=Name;
        this->gpa=Gpa;      
    }
};

int main(){
    Student stu1= Student("Kamran",3.5);
    stu1.bio();

    Student stu2= Student("Ahmed",3.1);
    stu2.bio();

    Student stu3= Student("Azaan",2.5);
    stu3.bio();
}