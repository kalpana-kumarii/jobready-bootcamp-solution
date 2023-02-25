// 3. Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a, b;
    int temp;
    printf("Enter two number to swap: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping first: %d  Second: %d", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping first: %d  Second: %d", a, b);
    return 0;
}