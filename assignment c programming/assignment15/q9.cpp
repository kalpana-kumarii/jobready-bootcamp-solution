// 9. Write a function in C to merge two arrays of the same size sorted in descending 
// order.

#include<stdio.h>
void mergeTwoArrays(int arr1[],int arr2[],int n){
    int size=n*2;
    int temp[size];
        for(int i=0;i<size;i++){
            if(i<5){
                temp[i]=arr1[i];
            }
            else{
                temp[i]=arr2[i-5];
            }
        }
    for(int i=0;i<10;i++){
        printf("%d ",temp[i]);
    }
        int flag;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(temp[i]>=temp[j]){
                flag=temp[i];
                temp[i]=temp[j];
                temp[j]=flag;
            }
        }
    }
    printf("\nSorted in Descending order\n");
      for(int i=0;i<10;i++){
        printf("%d ",temp[i]);
    }

}
int main(){
int arr1[]={1,4,3,2,6};
int arr2[]={3,6,1,8,9};
mergeTwoArrays(arr1,arr2,5);

    return 0;
}