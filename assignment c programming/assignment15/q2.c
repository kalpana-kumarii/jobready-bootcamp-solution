// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>
int minnum1(int arr[]){
int i,min1=arr[0];
for(i=0;i<4;i++){
    if(arr[i]<min1){
            min1=arr[i];
    }
}
return min1;
}


int main(){
int arr[]={23,674,456,23,546};
printf("Smallest number is %d",minnum1(arr));
    return 0;
}