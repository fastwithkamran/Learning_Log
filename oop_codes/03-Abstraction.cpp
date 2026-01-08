// It means to hide the things behind the procedure that make the things look simple
// Definition:
// Abstraction is showing only the essential functionality to the user while hiding all the complex operations behind it.

// Example (TV Remote):

// You see a colorful ON/OFF button or a volume knob.

// You don’t care how the TV handles electricity, circuits, or signals internally.

// You just press the button → TV turns on/off.

// The complex operations are hidden, you only see the interface you need.

// Key: You’re hiding the complexity, not necessarily protecting the data.

#include<iostream>
using namespace std;

class AbstractEmployee{ //Contract or Abstract class
    virtual void AskForPromotion()=0; //Pure virtual function whichever class sign the contract it has to provide the derived class for AskForPromotion
};

class Employee:AbstractEmployee{ //Signing the contract

private:
string Name;
string Company;
int Age;

public:
void AskForPromotion(){
    if(Age>30)
    cout<<Name<<" got promoted"<<endl;
    else
    cout<<Name<<" No promotion"<<endl;
} 

Employee(string name,string company,int age){
    Name=name;
    Company=company;
    Age=age;
}
};

int main(){
    Employee employee1=Employee("Kamran","Flash",19);
    Employee employee2=Employee("Ali","Shadow",35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}