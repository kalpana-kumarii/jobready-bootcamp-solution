#include<iostream>
using namespace std;

class StaticEg{

int a;
int b;
public:
static int k;

};
int StaticEg::k;
int main(){
StaticEg::k=4;
cout<<StaticEg::k;
    return 0;

}