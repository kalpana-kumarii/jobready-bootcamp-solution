// 1. Write a C++ program to demonstrate the addition of multiple types of data using
// generic functions or templates.
#include<iostream>
using namespace std;
template<class T>

T add(T a, T b){
    return a+b;
}

int main(){
cout<<"sum of integer numbers is "<<add<int>(5,7)<<endl;
cout<<"sum of float numbers is "<<add<float>(5.0,7.1)<<endl;
cout<<"sum of double numbers is "<<add<double>(8.34,7.1)<<endl;
    return 0;
}