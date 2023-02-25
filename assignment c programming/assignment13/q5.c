// 5. Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int sumNdigits(int);
int sumNdigits(int n){
    if(n==0){
        return 0;
    }
    printf("%d",n%10);
    return ((n%10)+sumNdigits(n/10));
}
int main(){

    printf("sum of digits of a given number is %d",sumNdigits(567));
    return 0;
}