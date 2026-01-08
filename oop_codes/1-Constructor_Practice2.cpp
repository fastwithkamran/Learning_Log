#include<iostream>
using namespace std;

class BankAccount{
public:
string name;
double balance;

BankAccount(string name,double balance){
    this->balance=balance;
    if(balance<0){
        this->balance=0;
    }
    this->name=name;
}

void bio(){
    cout<<"Name- "<<name<<endl;
    cout<<"Balance- "<<balance<<endl;
}
};

int main()
{
BankAccount cus1=BankAccount("Kamran",-43);
cus1.bio();

BankAccount cus2=BankAccount("Anabia",6784.5);
cus2.bio();
}