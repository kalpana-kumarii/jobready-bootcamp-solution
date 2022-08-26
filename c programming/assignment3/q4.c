// 4. Write a program to check whether 
// a given number is an even number or an odd
// number without using % operator.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    // int a=n&1==1;
    // printf("%d\n",a);

    if ((n&1)==0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
    return 0;
}