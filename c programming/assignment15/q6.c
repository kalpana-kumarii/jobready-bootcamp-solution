// 6. Write a function in C to read n number of values in an array and display it in reverse 
// order.
#include<stdio.h>

void displayReverse(int arr[],int n){
for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
}

}
int main(){
int arr[] = {7, 10, 4, 10, 5, 6};
int n = sizeof(arr) / sizeof(arr[0]);
// printf("%d",sizeof(arr));
// printf("\n%d",sizeof(arr[0]));
displayReverse(arr,n);
    return 0;
}