// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.
#include<stdio.h>
int main(){
    int a, sum=0, rem;
     printf("Enter a three digit numer");
    scanf("%d",&a);
    // a=a>>1;
    rem=a%10;
    sum+=sum*10+rem;
    // printf("\nNumber: %d", sum); 
    a=a/10;
    rem=a%10;
    sum=sum*10+rem;
    // printf("\nNumber: %d", sum); 
    a=a/10;
    rem=a%10;
    sum=sum*10+rem;
    printf("\nNumber: %d", sum); 

}