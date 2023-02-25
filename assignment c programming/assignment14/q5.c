// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>
int main(){
int arr[10],res=arr[0];
printf("Enter 10 numbers");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<10;i++){
   if(arr[i]<res){
    res=arr[i];
   }
}
printf("%d",res);
    return 0;
}