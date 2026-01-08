#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay(double amount) = 0;
};

class CashPayment : public Payment
{
public:
    void pay(double amount)
    {
        cout << "Paid " << amount << " in cash" << endl;
    }
};

class CreditCardPayment:public Payment
{
public:
void pay(double amount){
    cout<<"Paid "<<amount<<" using credit card"<<endl;
}
};

class MobileWalletPayment:public Payment{
    public:
    void pay(double amount){
        cout<<"Paid "<<amount<<" using mobile wallet"<<endl;
    }
};

int main(){
    CashPayment customer1;
    CreditCardPayment customer2;
    MobileWalletPayment customer3;

    customer1.pay(75);
    customer2.pay(87);
    customer3.pay(65);
}