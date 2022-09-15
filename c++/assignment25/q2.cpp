// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.

#include<iostream>
using namespace std;
class Complex{
private:
int a,b,c;
public:
void setData(int x, int y,int z){
a=x;
b=y;
c=z;
}
void show(){
    cout<<a<<" hr "<<b<<" min "<<c<<" sec";
}
};

int main(){

Complex c1,c2;
c1.setData(2,3,7);
c1.show();

    return 0;
}
