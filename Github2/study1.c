/*
If-else statements
01-11-25
*/
#include<stdio.h>

void main()
{
    int a,b,c;
    printf("\nEnter value of 1st angle : ");
    scanf("%d",&a);
    printf("\nEnter value of 2nd angle : ");
    scanf("%d",&b);
    printf("\nEnter value of 3rd angle : ");
    scanf("%d",&c);
    if(a+b+c==180)
    {
        printf("It is a valid triangle");
    }
    else
    printf("It is an invalid triangle");

}
