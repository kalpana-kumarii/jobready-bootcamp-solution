//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>
int main(){
 int a;
 printf("Enter a numer");
 scanf("%d", &a);
 a=a/10;
 a=a*10;
 printf("last digit making 0: %d", a);
    return 0;
}
