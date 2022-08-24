// 4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main(){
int a, b;
 printf("Enter two number to swap: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping first: %d  Second: %d", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping first: %d  Second: %d", a, b);
    return 0;
}