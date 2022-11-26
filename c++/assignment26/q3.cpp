// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube{
int a;
public:
    Cube(int k){
    a=k;
    }
    void volume(){
        cout<<6*a;
    }
};
int main(){
Cube c(5);
// Cube c=6;
c.volume();
    return 0;
}