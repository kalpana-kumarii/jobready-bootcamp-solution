// 5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main(){
    int n,sum=0;
   printf("Enter no.");
   scanf("%d",&n);
    for(int i=0;i<=n;i++){       
        sum+=i*i*i;       
    }
printf("sum of cubes of  first  n number %d",sum);
    return 0;
}