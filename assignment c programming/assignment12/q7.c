// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
int squaresN(int ,int);
int squaresN(int n ,int k){
if(k>n){
    return n;
}
printf("%d ",k*k);
return squaresN(n,k+1);
}

int main(){
int n=10,k=1;
squaresN(n,k);
    return 0;
}
