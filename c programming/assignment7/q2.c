// 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main(){
    int a,b,c,n,i;
    printf("Enter number ");
    scanf("%d",&n);
    a=-1;
    b=1;
    for(i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}