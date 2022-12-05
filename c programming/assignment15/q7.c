// 7. Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>
int totalDuplicates(int arr[],int n){
int count=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr[i]==arr[j] && i!=j){
            printf("arr[i]=%d arr[j]=%d i=%d j=%d \n",arr[i],arr[j],i,j);
            count++;
            break;
        }
    }
}
    return count;
}


int main(){
int arr[]={10, 10,10, 4, 10,4,7 ,10,5, 6};
int n=sizeof(arr)/sizeof(arr[0]);
printf("%d",totalDuplicates(arr,n));
    return 0;
}