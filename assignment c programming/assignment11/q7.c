// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibo(int);

void fibo(int n){
    int a,b,c;
    a=-1;
    b=1;
    c=a+b;
    for(int i=1;i<10;i++){
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
}
int main(){
fibo(10);
    return 0;
}