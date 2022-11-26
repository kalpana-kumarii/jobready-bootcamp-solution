// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
#include<iostream>
using namespace std;
int maxFind(int,int);
double maxFind(double,double);

int maxFind(int a,int b){
return (a>b?a:b);
}
double maxFind(double a,double b){
return (a>b?a:b);
}
int main(){
    cout<<"max number is "<<maxFind(6,7)<<endl;
     cout<<"max number is "<<maxFind(6.9,7.7)<<endl;
    return 0;
}