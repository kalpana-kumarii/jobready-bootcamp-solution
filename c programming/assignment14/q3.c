// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main(){
int arr[10];
int sum=0;
printf("Enter 10 numbers");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<10;i++){
    if(arr[i]%2==0){
   sum+=arr[i];
   }
}
printf("%d",sum);
    return 0;
}