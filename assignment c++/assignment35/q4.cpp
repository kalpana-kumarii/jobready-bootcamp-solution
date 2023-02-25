// 4. Write a C++ Program to Swap data using function template.
#include<iostream>
using namespace std;
template<class T>
 
void swap1(T a, T b){
    cout<<"Before swapping "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
        cout<<"Before swapping "<<a<<" "<<b<<endl;
}

 int main(){
    swap1<int>(7,8);
    return 0;
 }