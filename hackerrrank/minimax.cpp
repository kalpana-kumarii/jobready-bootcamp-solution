#include <bits/stdc++.h>

using namespace std;

vector<int> arr;

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
int min=0,max=0;
vector<int> temp;
for(int i=0;i<arr.size();i++){
    temp[i]=0;
    for(int j=0;j<arr.size();j++){
        if(arr[i] !=arr[j]){
        temp[i]+=arr[j];
        
        }
        cout<<temp[i]<<" ";
    }
}
for(int i=0;i<temp.size()-1;i++){
    if(temp[i]<temp[i+1]){
        min=temp[i];
    }
    else{
        max=temp[i];
    }
}
cout<<min<<" "<<max<<endl;
}

int main()
{
    cout<<"enter value";
    for(int i=0;i<5;i++){
    cin>>arr[i];
    }
 for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
 miniMaxSum(arr);
    return 0;
}
