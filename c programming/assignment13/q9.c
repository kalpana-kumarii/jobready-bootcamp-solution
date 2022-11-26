// 9. Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int digitCount(int,int);
int digitCount(int n,int c){
    //int c=0;
if(n==0){
    return c;
}

return digitCount(n/10,c+1);

}
int main(){
printf(" count the digits of a given number is %d",digitCount(4560,0));
    return 0;
}