// 9. Define a class Circle and define an instance member function to find the area of the
// circle.

#include<iostream>
using namespace std;

class Circle{
private:
int r;
public:
void set(int x){
r=x;
}
void show(){
    cout<<" Radius of Circle is "<<r<<endl;
}
float get(){
    
    return 3.14*r*r;
}
};

int main(){
Circle r1;
r1.set(5);
r1.show();
cout<<"Area of Circle is "<<r1.get()<<endl;

    return 0;
}