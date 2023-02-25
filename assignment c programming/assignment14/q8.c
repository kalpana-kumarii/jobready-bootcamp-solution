// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.

#include<stdio.h>
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10},res=arr[0],res2=arr[0];
printf("Enter 10 numbers");
// for(int i=0;i<10;i++){
//     scanf("%d",&arr[i]);
// }

for(int i=0;i<10;i++){
   if(arr[i]<res){
    res=arr[i];
   }
}
for(int i=0;i<10;i++){
   if(arr[i]<res2 && arr[i]>res){
   res2=arr[i];
   }
   printf("i %d  res2= %d res= %d\n",arr[i],res2,res);
}
printf("\n1st smallest number is  %d\n",res);
printf("2nd smallest number is %d",res2);
    return 0;
}