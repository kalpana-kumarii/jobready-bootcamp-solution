// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void arrSort(int *p, int s){

    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(p[i]<=p[j]){
                int temp;
                temp=*(p+i);
                p[i]=p[j];
                p[j]=temp;

            }
        }
    }
}
int main(){
int arr[]={4,56,3,6,30,4};
arrSort(arr,7);

for(int i=0;i<7;i++){
    printf("%d ",arr[i]);
}
    return 0;
}