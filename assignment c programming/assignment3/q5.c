// 5. Write a program to check whether 
// a given number is a three-digit number or not.
#include<stdio.h>
int main(){
    int n;
    int c=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        c++;
    }
    printf("%d",c);
    return 0;
}