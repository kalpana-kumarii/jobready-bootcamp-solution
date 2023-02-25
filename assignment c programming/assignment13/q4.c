// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int squaresN(int ,int);
int squaresN(int n ,int k){
if(k>n){
    return 0;
}
printf("%d ",k*k);
return (k*k+squaresN(n,k+1));
}

int main(){
int n=10,k=1;
printf("\nsum of squares of first n natural numbers is %d",squaresN(n,k));
    return 0;
}