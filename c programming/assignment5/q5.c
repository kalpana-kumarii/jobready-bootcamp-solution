// 5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int n;
   printf("Enter no.");
   scanf("%d",&n);
    for(int i=n;i>0;i--){
        if(i%2!=0)
       { printf("%d ",i);}
    }

    return 0;
}