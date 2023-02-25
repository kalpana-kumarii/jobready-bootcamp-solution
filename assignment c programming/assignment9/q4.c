// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include<stdio.h>
#include<stdlib.h>
int main(){
    char choice;
    int a,b,c;
printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\nb. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\nc. Check whether a given set of three numbers are equilateral triangle or not\nd.Exit");
scanf("%c",&choice);

switch (choice)
{
    case 'a':
    printf("ENter three sides");
    scanf("%d%d%d",&a,&b,&c); 
    if(a==b ||a==c ||b==c){
        printf("yes");
    }
    else{
        printf("no");
    }
    break;
    case 'b':
    printf("ENter three sides");
    scanf("%d%d%d",&a,&b,&c); 
    break;
    case 'c':
    printf("ENter three sides");
    scanf("%d%d%d",&a,&b,&c); 
    if(a==b && a==c){
    printf("Yes");}
    else{
    printf("no");
    }
    break;
    case 'd':
    exit(0);
default:
printf("Invalid choice");
    break;
}
    return 0;
}