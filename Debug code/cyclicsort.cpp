#include<iostream>
using namespace std;
void cyclicSort(int*);
void cyclicSort(int arr[]){
    int i=0;
    while(i<5){
        int ct=arr[i]-1;
         int temp;
        if(arr[i]!=arr[ct]){           
            temp=arr[i];
            arr[i]=arr[ct];
            arr[ct]=temp;
        }
        else{
            i++;
        }

    
    }
}
int main(){
    int arr[5]={3,4,5,2,1};
    cyclicSort(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}