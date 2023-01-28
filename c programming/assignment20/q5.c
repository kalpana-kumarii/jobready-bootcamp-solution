// 5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main(){

    int a=4,b=10;

    int *p1,*p2;
    p1=&a;
    p2=&b;
    if(*p1>*p2){
        printf("%d",*p1);
    }
    else{
        printf("%d",*p2);
    }

    return 0;
}