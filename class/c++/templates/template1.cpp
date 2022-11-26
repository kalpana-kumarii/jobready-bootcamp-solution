#include<iostream>
using namespace std;
template<class T>
T add( T x , T y){
    return (x+y);
}
int main(){

int sum = add<int>(3,5);
cout<<sum<<endl;

    return 0;
}