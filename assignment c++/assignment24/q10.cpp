// 10. Write functions using function overloading to add two numbers having different data
// types.
#include<iostream>
using namespace std;
int add(int,int);
float add(double,double);
int add(int a,int b){
return a+b;
}

float add(double a,double b){
return a+b;
}

int main(){
cout<<"sum of integer number is "<<add(5,7);
cout<<endl;
cout<<"sum of integer number is "<<add(5.8,7.8);
    return 0;
}