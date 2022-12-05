// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element.
// Input: arr[] = {10, 10, 3, 4, 3, 5, 6}
// Output: 5 
#include<stdio.h>
int fisrtOccur(int*,int);
int fisrtOccur(int arr[], int n){
for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
        if(arr[i]==arr[j] && i!=j){
           return arr[i];
        }
    }
}
    return -1;
}
int main(){
int arr[] = {7, 10, 4, 10, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

printf("%d ",fisrtOccur(arr,n));
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }

return 0;}