// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.

#include<stdio.h>
int main(){
    float usd1= 76.23;
    float rupi;
    printf("Enter rupees to convert into USD: ");
    scanf("%f", &rupi);
    printf("USD : %f doller", rupi/usd1);
    return 0;
}