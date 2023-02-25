// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include<stdio.h>
int main(){
//int arr[10]={1,2,3,4,5,6,7,8,9,10};
int arr[10];
float sum=0;
printf("Enter 10 numbers");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<10;i++){
   sum+=arr[i];
}
printf("%f",sum/10.0);
    return 0;
}