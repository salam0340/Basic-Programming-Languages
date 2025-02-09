#include <iostream>
using namespace std;

class Rectangle{
    private:
    int width, height;

    public:
    Rectangle(int w, int h){
        width = w;
        height = h;
    }

    int area(){
        return width * height;
    }
};

int main()
{
    Rectangle rect(10,7);
    cout << "Area of Rectangle is: " << rect.area() << endl;

    return 0;
}