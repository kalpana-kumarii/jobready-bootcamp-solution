// 6. Write a program to print greater between 
//two numbers. Print one number of both are
// the same.
#include<stdio.h>
int main(){
    int a, b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if(a==b)
      printf("both numbers are same");
    
   else     
       { 
        if(a>b){
        printf("\n%d is greater than %d",a,b);
        }
        else{
        printf("\n%d is greater than %d",b,a); 
        }
        }
    
    
}