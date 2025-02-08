#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("Enter the number of element: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Memory successfully allocated using malloc.\n");

    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
    }

    printf("The element of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }

    free(ptr);
    
    return 0;
}