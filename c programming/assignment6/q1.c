// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main(){
    int n,sum=0;
   printf("Enter no.");
   scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum+=i;
    }
printf("sum of first n number %d",sum);
    return 0;
}
