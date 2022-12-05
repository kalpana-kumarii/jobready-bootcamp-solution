// 8. Write a function in C to print all unique elements in an array.
#include<stdio.h>


int uniqueElements(int arr[],int value,int index,int n){
int c=1;
for(int i=0;i<n;i++){
    if(arr[i]==value && i!=index){
        c=0;
        break;
    } 

}

return c;
}


int main(){

int arr[]={10, 13,9, 4, 10,4,7 ,10,5, 6};
int n= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
printf("All unique number\n");
for(int i=0;i<n;i++){    
    if(uniqueElements(arr,arr[i],i,n)){
    printf("%d ",arr[i]);
    }
}
    return 0;
}