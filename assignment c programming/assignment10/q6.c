// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);

int fact(int m){
    int res=1,i;
    for(i=1;i<=m;i++){
        res=res*i;
    }
    return res;
}
int main(){
    int n=5;
   printf("Factorial of %d is %d",n,fact(n));
}