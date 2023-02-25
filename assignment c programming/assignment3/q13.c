// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2
#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);

    if(n%3==0 && n%2==0){
        printf("divisible by 3 and divisible by 2");
    }
    else{
         printf(" not divisible by 3 and divisible by 2");
    }
    return 0;
}