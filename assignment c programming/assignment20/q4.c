// 4. Write a program in C to demonstrate how to handle the pointers in the program.

#include<stdio.h>
int main(){
int a=6;
int *p,*q,*z;
p=&a;
q=&p;
z=&q;
printf("%d %d %d %d",a,&a,*p,*&p);
    return 0;
}