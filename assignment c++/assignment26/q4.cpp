// 4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter{
int c=0;
public:
Counter(){
cout<<c<<endl;
c++;
cout<<c<<endl;

}

};

int main(){
    Counter c1;

    return 0;
}