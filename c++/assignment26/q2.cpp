// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include<iostream>
using namespace std;
class Time{
int h,m,s;
public:
void setTime(int,int,int);
void showTime();
void normalize();
Time add(Time);
};

void Time:: setTime(int x,int y,int z){
    h=x;
    m=y;
    s=z;
}

void Time:: showTime(){
cout<<h<<" Hours "<<m<<" Minutes "<<s<<" Seconds "<<endl;
}

void Time:: normalize(){

}
Time Time:: add(Time t){
Time temp;
temp.h=h+t.h;
temp.m=m+t.m;
temp.s=s+t.s;
return temp;
}
int main(){

    Time t1,t2,t3;
    t1.setTime(4,50,67);
    t1.showTime();
    t2.setTime(2,20,10);
    t2.showTime();
    t2=t2.add(t1);
      t2.showTime();
}
