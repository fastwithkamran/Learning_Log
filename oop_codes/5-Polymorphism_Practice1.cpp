#include<iostream>
using namespace std;

class Animal{
public:
    virtual void speak()=0;
};

class Dog:public Animal{

    void speak(){
        cout<<"Dog is speaking"<<endl;
    }
};

class Cat:public Animal{

    void speak(){
        cout<<"Cat is speaking"<<endl;
    }
};

int main(){
    Animal* a1= new Dog();
    Animal* a2= new Cat();

    a1->speak();
    a2->speak();
}