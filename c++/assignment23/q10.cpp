// 10. Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;
int main(){

int n=10 ,arr[n];
int sum=0;
cout<<"Enter 10 numbers";

for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
sum=sum+arr[i];;
}

cout<<"Sum of 10 numbers "<<sum;

    return 0;
}