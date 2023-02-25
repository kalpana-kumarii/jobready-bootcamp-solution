// 7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
int main(){
int arr[10],res=0,res2=0;
printf("Enter 10 numbers");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<10;i++){
   if(arr[i]>res){
    res=arr[i];
   }
}
for(int i=0;i<10;i++){
   if(arr[i]>res2 && arr[i]<res){
   res2=arr[i];
   }
}
printf("1st largest number is  %d\n",res);
printf("2nd largest number is %d",res2);
    return 0;
}