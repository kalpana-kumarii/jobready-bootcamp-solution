// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int);
int add(int x, int y, int z=0){
    return (x+y+z);
}
int main(){
cout<<"sum is "<<add(3,4,5)<<endl;
cout<<"sum is "<<add(6,8);
    return 0;
}
