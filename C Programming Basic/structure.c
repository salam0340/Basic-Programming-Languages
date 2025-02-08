#include <stdio.h>

struct Employee{
    char name[50];
    char designation[30];
    int age;
    float salary;
};

int main()
{
    struct Employee employee1 = {"Abdus Salam","DBA",25,100000.50};

    printf("Employee Name: %s\n",employee1.name);
    printf("Designation: %s\n",employee1.designation);
    printf("Age: %d\n",employee1.age);
    printf("Salary: %.2f\n",employee1.salary);

    return 0;

}