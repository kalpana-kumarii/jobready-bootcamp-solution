// 9. Write a program to print cubes of the first N natural numbers

#include<stdio.h>
int main(){
    int n;
   printf("Enter no.");
   scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i*i*i);
    }

    return 0;
}