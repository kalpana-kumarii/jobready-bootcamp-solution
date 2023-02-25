// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include<stdio.h>
int main(){
int arr[10];
printf("Enter 10 numbers");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for(int i=9;i>=0;i--){
  printf("%d ",arr[i]);
}

    return 0;
}