// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number


#include<iostream>
using namespace std;
class Complex{
private:
int a,b;
public:
void setData(int x, int y){
a=x;
b=y;
}
void show(){
    cout<<a<<"+"<<b<<"i";
}
};

int main(){

Complex c1,c2;
c1.setData(2,3);
c1.show();

    return 0;
}