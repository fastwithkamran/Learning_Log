#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual double getArea() = 0;
};
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double Length, double Width)
    {
        length = Length;
        width = Width;
    }
    double getArea()
    {
        return length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double Radius)
    {
        radius = Radius;
    }

    double getArea()
    {
        return 3.142 * radius * radius;
    }
};

int main()
{
    Rectangle shape1 = Rectangle(2, 2);
    Circle shape2 = Circle(4);

    cout<<"Area of Rectangle is "<<shape1.getArea()<<endl;
    cout<<"Area of Circle is "<<shape2.getArea()<<endl;
}