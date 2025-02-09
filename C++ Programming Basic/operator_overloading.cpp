#include <iostream>
using namespace std;

class Complex{
    private:
    float real, image;

    public:
    Complex(float r = 0, float i = 0) : real(r), image(i) {}

    Complex operator + (const Complex& other){
        return Complex(real + other.real, image + other.image);
    }

    void display(){
        cout << real << " + " << image << " i " << endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex c3 = c1 + c2;
    c3.display();
    
    
    return 0;
}