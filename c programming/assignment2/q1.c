//operators question
//1. Write a program to print unit digit of a given number
// 2345  unit digit: 5

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to print unit digit: ");
    scanf("%d", &a);
    printf("unit digit is %d",a%10);

    return 0;
}