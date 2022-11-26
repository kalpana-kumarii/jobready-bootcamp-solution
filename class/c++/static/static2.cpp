#include<iostream>
using namespace std;

class StaticEg{

int a;
int b;
static int k;
public:
void set(int x,int y){
a=x;
b=y;
}
static void setk(int x){
    k=x;
}
static int getk(){
return k;
}

};
int StaticEg::k;
int main(){
StaticEg::setk(10);
cout<<StaticEg::getk();
    return 0;

}