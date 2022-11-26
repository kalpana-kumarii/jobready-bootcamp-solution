// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int lcm(int a, int b){
    int i=1;
    for(i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            break;           
        }
    } 
return i; 
}
int main(){
printf("%d",lcm(30,30));
    return 0;
}