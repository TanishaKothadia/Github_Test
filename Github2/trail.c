#include <stdio.h>

int main()
{
    int n=5,i,j;
    for ( i = 0; i < n; i++)
    {
        printf("T");
    }
    printf("\n");
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (j == n / 2)
            {
                printf("T");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}




