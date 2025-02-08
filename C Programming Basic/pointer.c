#include <stdio.h>

int main()
{
    int array[4] = {10,30,50,70};
    int *pointer = array;

    for(int i = 0;i < 4; i++)
    {
        printf("Value at array[%d] using pointer: %d\n",i, *(pointer + i));
    }

    return 0;
}