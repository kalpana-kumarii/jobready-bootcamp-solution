// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int maxnum(int);

int maxnum(int arr[]){
int i,max1=0;
for(i=0;i<4;i++){
    if(arr[i]>max1){
            max1=arr[i];
    }
}
return max1;
}


int main(){
int arr[]={23,674,456,23,546};


printf("Greatest number is %d",maxnum(arr));
    return 0;
}
