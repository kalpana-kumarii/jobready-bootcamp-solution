// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumNOdd(int,int);
int sumNOdd(int n,int k){
if(k>n){
    printf("\n%d ",k);
    return 0;
}
printf("%d ",k);
return (k+sumNOdd(n,k+2));
}
int main(){
    //printf("\n");
    printf("\nsum of first N odd natural numbers is %d",sumNOdd(10,1));
    return 0;
}