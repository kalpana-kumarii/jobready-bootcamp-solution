// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user

#include<stdio.h>
int main(){
int arr[10];
int arr2[10];
printf("Enter 10 numbers");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<10;i++){
 arr2[i]=arr[i];
}

for(int i=0;i<10;i++){
  printf("%d ",arr2[i]);
}

    return 0;
}