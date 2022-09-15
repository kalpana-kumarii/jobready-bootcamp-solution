// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include<iostream>
using namespace std;
class Factorial {

public:
void fact(int x){
int fact=1;
for(int i=1;i<=x;i++){
    fact*=i;
}
cout<<"Factorial of "<<x<<" is "<<fact;
}
};

int main(){
Factorial f1;
f1.fact(4);
return 0;
}