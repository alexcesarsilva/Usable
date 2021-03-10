// Program to print even or odd
#include <stdio.h>

int main(void)
{
    int firstPage, lastPage;
    
    printf("Type first page: ");
    scanf("%i", &firstPage);
    printf("Type first page: ");
    scanf("%i", &lastPage);
    printf("\n");

    int i = firstPage;
    while (i < lastPage && i > 0)
    {
        printf("%i, ", i);
        i += 2;
    }
    if (i == lastPage)
    {
        printf("%i\n\n", i);
    }
    return 0;
}