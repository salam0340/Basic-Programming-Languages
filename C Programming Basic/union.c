#include <stdio.h>

union Data{
    int intValue;
    float floatValue;
    char string[30];
};

int main()
{
    union Data data;

    data.intValue = 10;
    printf("data.intValue: %d\n", data.intValue);

    data.floatValue = 220.5;
    printf("data.floatValue: %d\n", data.floatValue);

    printf("data.intValue (after float assignment): %d\n",data.intValue);

    
    return 0;

}