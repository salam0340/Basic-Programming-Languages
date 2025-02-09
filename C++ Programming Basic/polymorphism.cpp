#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout << "Some generic virtual sound for animal" << endl;
    }
};

class Dog : public Animal{
    void sound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal{
    void sound() override {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Animal* animal;
    Dog dog;
    Cat cat;

    animal = &dog;
    animal -> sound();
    animal = &cat;
    animal -> sound();
    
    
    return 0;
}