// 10. Write a function in C to count the frequency of each element of an array

#include<stdio.h>

int countFrequency(int arr[],int value,int index,int n){
    int c=0;
    for(int i=index;i>=0;i--){
        if(arr[i]==value && i!=index){
           return -1;
        }
    }
       for(int i=0;i<n;i++){
       if(arr[i]==value){
        c++;
       } 
    }

    return c;
}

int main(){
int   arr[] = {10, 20, 20, 10, 10,6, 20, 5, 20};
int n= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
int k;
for(int i=0;i<n;i++){
   k=countFrequency(arr,arr[i],i,n);
   if(k!=-1){
    printf("%d -> %d\n",arr[i],k);
    }
}
    return 0;
}