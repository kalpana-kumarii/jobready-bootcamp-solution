// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);

    if(n%3==0 || n%7==0){
        printf("divisible by 7 and divisible by 3");
    }
    else{
         printf(" not divisible by 7 and divisible by 3");
    }
    return 0;
}
