// 1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main(){
int a; 
printf("enter a number");
scanf("%d",&a);
if(a>0){
    printf("positive number");
}
else{
    printf("non positive number");
}
    return 0;
;}