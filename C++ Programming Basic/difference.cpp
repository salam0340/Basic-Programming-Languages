#include <iostream>
using namespace std;

void print(int x)
{
    cout << "Integer: " << x << endl;
}

void print(double x)
{
    cout << "Double: " << x << endl;
}

int main()
{
    print(5);
    print(5.14);

    return 0;

}