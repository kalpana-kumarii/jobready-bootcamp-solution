// 3. Write a C++ program to find the largest of three elements using a template.

#include<iostream>
using namespace std;
template<class T>

T add(T a, T b, T c){
    return (a>b)?(a>c)?a:c:b;
}

int main(){
cout<<"Largest of integer numbers is "<<add<int>(5,5,3)<<endl;
cout<<"Largest of float numbers is "<<add<float>(5.0,7.1,9)<<endl;
cout<<"Largest of double numbers is "<<add<double>(8.34,7.1,10)<<endl;
    return 0;
}