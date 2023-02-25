// 1. Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int img;
public:
void setData(int,int);
void showData();
Complex add(Complex);

};
void Complex::setData(int x, int y){
real=x;
img=y;
}

void Complex::showData(){
    cout<<real<<"+"<<img<<"i"<<endl;
}
Complex Complex::add(Complex x){
Complex temp;
temp.real=real+x.real;
temp.img= img+x.img;
return temp;
}
int main(){
Complex c1,c2,c3;
c1.setData(4,5);
c1.showData();
c2.setData(2,3);
c2.showData();
c3=c2.add(c1);
c3.showData();
}