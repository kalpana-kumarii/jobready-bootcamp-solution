#include<iostream>
using namespace std;
template<class T, class S,class P=int>
//template<class T, class S=int,class P=int>
// float sum2= add<int>(3,4.5);
P add( T x , S y){
    return (x+y);
}
int main(){

int sum = add<int,int,float>(3,5);
cout<<sum<<endl;
float sum2= add<int, float, float>(3,4.5);
cout<<sum2<<endl;
    return 0;
}