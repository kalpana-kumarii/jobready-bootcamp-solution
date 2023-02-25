// 2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to print unit digit: ");
    scanf("%d", &a);
    printf("unit digit is %d",a/10);

    return 0;
}