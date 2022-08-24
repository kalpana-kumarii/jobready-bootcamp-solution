// 8. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main(){
    int a=6;
    int d= a&1;
    int check= d%10>0?printf("odd number"):printf("even number");
    return 0;
}
