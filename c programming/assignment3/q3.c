// 3. Write a program to check whether 
// a given number is an even number or an odd
// number
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
    return 0;
}