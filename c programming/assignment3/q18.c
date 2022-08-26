// 18. Write a program which takes the month number as an input and display number of
// days in that month

#include<stdio.h>
int main(){
char month;
printf("Enter month number: ");
scanf("%c",&month);
if( month=='1'|| month=='3' || month=='5' || month=='7' || month=='8' || month=='10' ||month=='12'){
printf("31 days is %c month", month);
}
else if(month=='2'){
    printf("28 days is %c month", month);
}
else{
    printf("30 days is %c month", month);
}
    return 0;
}