#include <stdio.h>

#define DEBUG

int main()
{
    #ifdef DEBUG
        printf("Debug mode is ON\n");
    #endif

    #ifndef DEBUG
        printf("Debug mode is OFF\n");
    #endif

        printf("This is simple program.\n");

    
    return 0;
}