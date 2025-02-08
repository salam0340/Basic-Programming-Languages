#include <stdio.h>

int addition(int a, int b);

int main()
{
    int result;
    result = addition(40,20);
    printf("The summation is %d",result);

    return 0;

}
int addition(int a, int b)
{
    return a + b;
}