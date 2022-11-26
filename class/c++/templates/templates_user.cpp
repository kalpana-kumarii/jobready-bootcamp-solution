#include<iostream>
using namespace std;
template<class T>
T add( T x , T y){
    return (x+y);
}
int main(){
int x,y;
cout<<"enter two numbers"<<endl;
cin>>x>>y;
cout<<add<int>(x,y)<<endl;
int sum = add<int>(3,5);
cout<<sum<<endl;

    return 0;
}