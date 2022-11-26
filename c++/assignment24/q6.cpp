// 6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int& ,int&);

int main(){
int a=3, b=4;
 swap(a,b);
}
void swap(int &a, int &b){
cout<<"Before Swapping "<<a<<" "<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"After Swapping "<<a<<" "<<b;
}