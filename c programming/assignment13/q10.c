// 10. Write a program in C to calculate the power of any number using recursion

#include<stdio.h>
int power(int,int,int);
int power(int n,int p,int temp){
if(p<=0){
    return temp;
}
printf("%d ",temp);
return power(n,p-1,temp*n);
}
int main(){
    //int n=power(5,3,0);
    //printf("%d\n",n);
    printf("power of a number is %d ",power(5,3,1));
    return 0;
}