#include <iostream>
using namespace std;

class Vehicle{
    public:
    string brand = "BMW";

    void honk(){
        cout << "Beep beep!" << endl;
    }
};

class Car : public Vehicle{
    public:
    string model = "MX-5";

};

int main()
{
    Car car1;

    car1.honk();
    cout << "Vehicle Brand: " << car1.brand << "\nModel no: " << car1.model << endl;

    return 0;
}