// 2. Write a C++ Program to find Largest among two numbers using function template.

#include<iostream>
using namespace std;
template<class T>

T add(T a, T b){
    return (a>b)?a:b;
}

int main(){
cout<<"Largest of integer numbers is "<<add<int>(5,7)<<endl;
cout<<"Largest of float numbers is "<<add<float>(5.0,7.1)<<endl;
cout<<"Largest of double numbers is "<<add<double>(8.34,7.1)<<endl;
    return 0;
}