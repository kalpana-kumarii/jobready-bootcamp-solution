// 8. Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>
int fibo(int);
int fibo(int n){
// if(n==1){
//     return 1;}
if(n==0){
    return 0;
}
printf("%d ",fibo(n-1)+fibo(n-2));
// return fibo(n-1)+fibo(n-2);
}

int main(){
    fibo(5);
// printf("%d",fibo(10));

    return 0;
}