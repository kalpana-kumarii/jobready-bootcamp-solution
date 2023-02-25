// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include<stdio.h>
int main(){
int c;
printf("Enter choice\n");
scanf("%d",&c);
switch(c){
    case 0:
    printf("Happy sunday");
    break;
    case 1:
    printf("Happy monday");
    break;
    case 2:
    printf("Happy tuesday");
    break;
     case 3:
    printf("Happy wednesday");
    break;
    case 4:
    printf("Happy thrusday");
    break;
    case 5:
    printf("Happy friday");
    break;
    case 6:
    printf("Happy satarday");
    break;
   default:
   printf("Invalid choice");
   break;
}
    return 0;
}