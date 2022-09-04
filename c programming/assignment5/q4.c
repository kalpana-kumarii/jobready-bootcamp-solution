// 4. Write a program to print the first N odd natural numbers


#include<stdio.h>
int main(){
    int n;
   printf("Enter no.");
   scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2!=0)
       { printf("%d ",i);}
    }

    return 0;
}