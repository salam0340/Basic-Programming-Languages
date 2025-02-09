#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    string designation;
    int age;
    double salary;

    void display(){
        cout << "Employee Name: " << name << "\nDesignation: " << designation << "\nAge: " << age << "\nSalary: " << salary << endl;
    
    }
};

int main()
{
    Employee employee1;
    employee1.name = "Abdus salam";
    employee1.designation = "Database Administrator";
    employee1.age = 25;
    employee1.salary = 100000.50;

    employee1.display();
      
    return 0;
}