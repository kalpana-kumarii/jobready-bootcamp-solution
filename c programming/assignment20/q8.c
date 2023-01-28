// 8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main(){
int arr[]={5,6,3,5,7};
int sum=0;
for(int i=0;i<5;i++){
    sum+=*(arr+i);
}
printf("%d",sum);
    return 0;
}