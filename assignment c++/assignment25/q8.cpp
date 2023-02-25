// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include<iostream>
using namespace std;

class Rectangle{
private:
int l,b;
public:
void set(int x, int y){
l=x;
b=y;
}
void show(){
    cout<<"sides of a retngle "<<l<<" "<<b<<endl;
}
int get(){
    
    return l*b;
}
};

int main(){
Rectangle r1;
r1.set(5,6);
r1.show();
cout<<"Area of Rectangle is "<<r1.get()<<endl;

    return 0;
}