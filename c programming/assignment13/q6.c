// 6. Write a recursive function to calculate factorial of a given number

#include<stdio.h>
int fact(int);
int fact(int n){
if(n<=1){
    return 1;
}
return n*fact(n-1);

}

int main(){
    printf("factorial of a given number is %d",fact(100));
    return 0;
}
