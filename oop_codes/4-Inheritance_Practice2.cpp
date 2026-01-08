#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int year;

public:
    Vehicle(string Brand, int Year)
    {
        brand = Brand;
        year = Year;
    }

    void showInfo()
    {
        cout << brand << " established in the year " << year << endl;
    }
};

class Car : public Vehicle
{
private:
    int seats;

public:
    void showInfo()
    {
        Vehicle::showInfo();
        cout << "has " << seats << " number of seats" << endl;
    }
    Car(string Brand, int Year, int Seats)
        : Vehicle(Brand, Year)
    {
        seats = Seats;
    }
};

int main()
{
    Vehicle v1 = Vehicle("Toyota", 2003);
    v1.showInfo();

    Car c1 = Car("Carolla", 2004, 5);
    c1.showInfo();
}