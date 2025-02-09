#include <iostream>
using namespace std;

class Dog{
    public:
    string name;
    int age;

    void bark(){
        cout << name << "\n" << age << "\nDog says woof!" << endl;
    }
};

int main()
{
    Dog mydog;
    mydog.name = "Doggy";
    mydog.age = 5;
    mydog.bark();

    return 0;
}