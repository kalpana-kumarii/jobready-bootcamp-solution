// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)

#include<stdio.h>
int main(){
 int a,d;
 printf("Enter a numer and digit");
 scanf("%d %d", &a, &d);
 a=a*10+d;
 printf("appending digit after last digit : %d", a);
    return 0;
}

