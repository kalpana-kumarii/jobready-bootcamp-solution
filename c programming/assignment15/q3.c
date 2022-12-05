// 3. Write a function to sort an array of any size. (TSRS)

#include<stdio.h>

int sortArray(int* ,int);
 void swap1(int*,int*);

int sortArray(int arr[],int n){
int i,j;
 int temp;
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(arr[i]<=arr[j]){
          swap1(&arr[i],&arr[j]);    
        }
    }
   }
    return arr[n];
}
void swap1(int *a , int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){

    int n=5;
    int arr[5]={2,5,1,4,6};
    int i;
    // printf("Enter size");
    // scanf("%d",&n);
    // int arr[n],i;
    //  for(i=0;i<n;i++){
    //     scanf("%d ",&arr[i]);
    // }
    sortArray(arr,5);
    printf("\nSorted Array is\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}