// 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main(){
int n;

printf("enter number");
scanf("%d", &n);
if(n==0){
    printf("zero ");
}
 if(n>0){
    printf("positive");
}
if(n<0){
    printf("negative");
}

    return 0;
}