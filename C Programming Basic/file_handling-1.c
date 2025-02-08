#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("example.txt","w");

    if(fptr == NULL)
    {
        printf("Error opening files\n");
        return 1;
    }

    fprintf(fptr, "Hello World!\n");
    fprintf(fptr, "This is a testing file.n");

    fclose(fptr);

    printf("Data written to file success\n");
    
    return 0;
}