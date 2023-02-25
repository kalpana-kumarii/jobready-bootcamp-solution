// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.


#include<stdio.h>
int main(){
int arr[10]={3,45,5,3,5,2,24,2,4,6};
printf("Enter 10 numbers");
// for(int i=0;i<10;i++){
//     scanf("%d",&arr[i]);
// }
printf("\n");
for(int i=0;i<9;i++){
printf("%d ",arr[i]);
}
for(int i=0;i<10;i++){
    int temp;
    for(int j=0;j<10;j++){
    if(arr[j]>=arr[i]){
       temp=arr[i];
       arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("i=%d j=%d \n",arr[i],arr[j]);
   }
   printf("\n");
}
printf("\n");
for(int i=0;i<9;i++){
printf("%d ",arr[i]);
}
    return 0;
}