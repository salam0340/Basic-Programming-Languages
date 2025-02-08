#include <stdio.h>

int main()
{
    FILE *fptr;

    char buffer[100];
    fptr = fopen("example.txt","r");

    if(fptr == NULL)
    {
        printf("Error opening files!\n");
        return 1;
    }

    while(fgets(buffer, 100,fptr) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(fptr);

    printf("Data written to file success\n");
    
    return 0;
}