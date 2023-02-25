// 1. Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main(){
    int a,b,i,n,c;
    printf("Enter number ");
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==1){
        printf("%d",b);
    }
    else{
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    }
    return 0;
}
