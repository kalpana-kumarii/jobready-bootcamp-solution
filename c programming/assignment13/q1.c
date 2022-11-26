// 1. Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
int sumN(int);
int sumN(int n){
if(n==1){
    return 1;
}
return (n+sumN(n-1));
}
int main(){
printf("%d",sumN(10));
return 0;
}