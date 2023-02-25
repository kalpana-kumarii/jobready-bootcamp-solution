// 3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;
void findPower(int,int);
int main(){
    int x=2,y=3;
    findPower(x,y);

    return 0;
   
}
void findPower(int a,int b){
    int res=1;
while(b!=0){
res=res*a;
b--;
}
cout<<"x raised to the power y "<<res;
}