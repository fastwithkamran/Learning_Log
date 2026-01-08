#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;

public:
    BankAccount(double amount = 0)
    {
        balance = amount;
    }

    double getbalance()
    {
        return balance;
    }

    void setdeposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Amount cant be withdraw" << endl;
        }
    }
    void setwithdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdraw: " << amount << endl;
        }
        else
        {
            cout << "Amount cant be withdraw" << endl;
        }
    }
};

int main()
{
    BankAccount customer1(50);
    BankAccount customer2;

    customer1.setdeposit(50);
    customer2.setdeposit(60);

    customer1.setwithdraw(40);
    customer2.setwithdraw(10);

    cout<<"Balance: "<<customer1.getbalance()<<endl;
    cout<<"Balance: "<<customer2.getbalance();
}