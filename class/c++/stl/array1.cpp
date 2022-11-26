#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main(){
int a[10]={1,2,3,4,5};  ///c style array
cout<<a[0]<<endl;
array <int,5>arr = {1,2,3,4,5}; //c++ style array
array<int,5>arr2={2,4,6,8,12};
array<int,5>arr3;
cout<<arr[0]<<endl;

// 1- using at()
for(int i=0;i<arr.size();i++){
    //cout<<arr[i]<<" ";
    cout<<arr.at(i)<<" ";
    
}
cout<<endl;
// 2- using get<>(); tuple class function
cout<<get<0>(arr)<<" ";
cout<<get<1>(arr)<<" ";
cout<<get<2>(arr)<<" ";
cout<<get<3>(arr)<<" ";
cout<<get<4>(arr)<<" ";
cout<<endl;

// 3 - using operator[] 
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
    
    
}

// using front & back
cout<<endl;
cout<<"front element ( 1st ) "<<arr.front()<<endl;
cout<<"last element ( 1st ) "<<arr.back()<<endl;
cout<<endl;

// it will swap of sam size array
// this is the limitaion of array class 
arr.swap(arr2);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";   
}
cout<<endl;

//empty() function
// it will check array size  is 0 empty or not
cout<<arr3.empty();
cout<<endl;

// it will fill the array by the same constant
arr.fill(1);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";   
}
cout<<endl;

















    return 0;
}