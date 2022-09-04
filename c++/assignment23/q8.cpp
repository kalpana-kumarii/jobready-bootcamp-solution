// 8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"Enter two number: ";
cin>>a>>b;
cout<<"Before swapping a= "<<a<<" b= "<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swapping a= "<<a<<" b= "<<b;

    return 0;
}