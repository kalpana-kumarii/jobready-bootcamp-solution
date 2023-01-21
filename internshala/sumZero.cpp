#include<iostream>

using namespace std;

int *sumZero(int arr[],int n){
    int count=0;
   static int res[3];
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==0){
                res[0]=arr[i];
                res[1]=arr[j];
                res[2]=arr[k];
                count++;
            return res;
            }
        }
    }
}
if(count==0)
    cout<<"Element not found"<<endl;
  return nullptr;

}

int main(){
int arr[]={-4, 1, 3, -2, -1};
int n= sizeof(arr) / sizeof(arr[0]);

int* ptr= sumZero(arr,n);
   for(int i=0;i<3;i++){
    cout<<ptr[i]<<" ";
   }

    return 0;
}