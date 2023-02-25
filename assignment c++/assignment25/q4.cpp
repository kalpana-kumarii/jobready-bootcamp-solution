// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.

#include<iostream>
using namespace std;
class LargestNumber{
private:
    int a,b,c;
public:
void set(int x,int y,int z){
    a=x;
    b=y;
    c=z;
}
void show(){
    cout<<"Number is"<<a<<" "<<b<<" "<<c<<endl;
}
int get(){
    if(a>b){
        if(a>c){
           cout<<"1"<<a;
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }

  
}

};
int main(){
 LargestNumber l1;
 l1.set(4,3,4);
 l1.show();
 cout<<"largest number is "<<l1.get();

    return 0;
}