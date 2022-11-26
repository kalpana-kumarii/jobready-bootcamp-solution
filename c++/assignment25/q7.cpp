// 7. Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.

#include<iostream>
using namespace std;
class Greatest{
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
 Greatest l1;
 l1.set(4,3,4);
 l1.show();
 cout<<"Greatest number is "<<l1.get();

    return 0;
}