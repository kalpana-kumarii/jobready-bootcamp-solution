// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<stdio.h>
#include<stdlib.h>
int main(){
char choice;
int a,b;
while (1)
{
    printf("a. Addition \n b. Subtraction\n c. Multiplication \n d. Division \n e. Exit\n");
    printf("Enter choice\n");
    scanf("%c",&choice);
  

     switch (choice)
    {
    case 'a':
      printf("enter value\n ");
        scanf("%d%d",&a,&b);
         printf("Addition is %d",a+b);
         printf("\n");
        break;
    case 'b':
         printf("enter value\n ");
        scanf("%d%d",&a,&b);
         printf("Substraction is is %d",a-b);
           printf("\n");
        break;
    case 'c':
     printf("enter value\n ");
        scanf("%d%d",&a,&b);
         printf("Multiplication is is %d",a*b);
           printf("\n");
        break;
    case 'd':
     printf("enter value\n ");
        scanf("%d%d",&a,&b);
         printf("Divition is is %d",a/b);
           printf("\n");
        break;
    case 'e':
         exit(0);
        break;
    default:
         printf("Invalid");
           printf("\n");
        break;
    }
}

return 0;
}        