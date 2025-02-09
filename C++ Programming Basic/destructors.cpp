#include <iostream>
using namespace std;

class Rectangle{
    private:
    int width, height;

    public:
    Rectangle(int w, int h){
        width = w;
        height = h;
        cout << "Rectangle created by Width: " << width << " and Height: " << height << endl;
    }
    ~Rectangle(){
        cout << "Rectangle destroyed by Width: " << width << " and Height: " << height << endl;

    }

    int area(){
        return width * height;
    }
};

int main()
{
    Rectangle rect(10,8);
    cout << "Area of Rectangle is: " << rect.area() << endl;
    
    return 0;
}