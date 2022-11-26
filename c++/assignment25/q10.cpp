// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area{
    private:
        int r;
        int s;
        int l,b;
    public:
    void setRadius(int x){
        r=x;
    }
    void setSq(int y){
        s=y;
    }
    void setRec(int a, int c){
        l=a;
        b=c;
    }
    void show(){
        cout<<"Circle "<<r<<" Square"<<s<<" Rectancgle "<<l<<" "<<b<<endl;
    }
    float getCircleArea(){
        return 3.14*r*r;
    }
    int getSqArea(){
        return s*s;
    }
    int getRecArea(){
        return l*b;
    }
};
int main(){
    Area a1;
    a1.setRadius(6);
    a1.setSq(5);
    a1.setRec(4,2);
    a1.show();
    cout<<"Area of Circle "<<a1.getCircleArea()<<endl;
    cout<<"Area of Square "<<a1.getSqArea()<<endl;
    cout<<"Area of Rectangle "<<a1.getRecArea()<<endl; 

    return 0;
}

