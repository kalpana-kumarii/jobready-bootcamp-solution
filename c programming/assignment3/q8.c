// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("enter year");
    scanf("%d", &year);

    // Method 1

    // if(year%4==0){
    //     if(year%100==0){
    //         if(year%400==0){
    //             printf("Leap year");
    //         }
    //         else{
    //             printf("Not Leap year");
    //         }
    //     }
    //     else{
    //         printf("Leap year");
    //     }

    // }
    // else{
    //       printf("Not Leap year");
    // }

    // Method 2
    // if (year % 4 == 0)
    // {
    //     if (year % 100 == 0 && year % 400 != 0)
    //     {
    //         printf("Not Leap year");
    //     }
    //     else
    //     {
    //         printf("Leap year");
    //     }
    // }
    // else
    // {
    //     printf("Not Leap year");
    // }

    //Method 3
(year % 4 == 0)?
(year % 100 == 0 && year % 400 != 0)?printf("Not Leap year"):printf("Leap year")
:printf("Not Leap year");

}