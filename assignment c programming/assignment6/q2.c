// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main(){
    int n,sum=0;
   printf("Enter no.");
   scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2==0)
       { 
        sum+=i;
       }
    }
printf("sum of first even n number %d",sum);
    return 0;
}