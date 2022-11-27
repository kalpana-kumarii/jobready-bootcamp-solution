//8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle

#include<iostream>
using namespace std;
float area(float);
int area(int,int);
double area(double,double);

float area(float r){
    return (3.14*r*r);
}

int area(int  a,int b){
     return ((a*b)/2);
}
  
double area(double a,double b){
   return (a*b);
}  
int main(){
cout<<"Area of circle is "<<area(6.7)<<endl;
cout<<"Area of Rectangle is "<<area(6,8)<<endl;
cout<<"Area of  is Triangle "<<area(6.7,8.2);
}