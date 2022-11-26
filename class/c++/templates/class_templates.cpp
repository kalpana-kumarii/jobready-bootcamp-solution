#include<iostream>
using namespace std;
template<class T1=int ,class T2=int , class T3=int>
class Multiplication{
public:
T1 a;
T2 b;
//  int multi(int x, int y){
//     return (x*y);
//  }
 T3 multi(){
    return (a*b);
 }

};
int main(){
Multiplication <int,int, float>m1;
m1.a=6;
m1.b=6;
//cout<<m1.multi(m1.a,m1.b);
cout<<m1.multi();
    return 0;
}