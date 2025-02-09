#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Animal eat food!" << endl;
    }

};

class cat : public Animal{
    public:
    void meow(){
        cout << "Cat says meow!" << endl;
    }
};


int main()
{
    cat cat1;

    cat1.eat();
    cat1.meow();

    return 0;
}