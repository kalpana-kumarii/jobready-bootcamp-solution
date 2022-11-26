// 3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
#include<stdio.h>
int sumNEven(int,int);
int sumNEven(int n,int k){
if(k>n){
   // printf("\n%d ",k);
    return 0;
}
printf("%d ",k);
return (k+sumNEven(n,k+2));
}
int main(){
    //printf("\n");
    printf("\nsum of first N odd natural numbers is %d",sumNEven(10,0));
    return 0;
}