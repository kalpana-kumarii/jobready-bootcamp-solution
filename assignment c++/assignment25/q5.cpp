// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber{
    private:
    int actNum;
    int reverse;
    public:
     void setData(int n){
        actNum=n;
     }
     int getData(){
       
        int rem ,res=0;
        // if(actNum<0){
        //     actNum=-actNum;
        // }
       while (actNum!=0)
       {
        rem=actNum%10;
        res= res*10+rem;
       actNum= actNum/10;
       }
     reverse=res;
    return reverse;

     }


};

int main(){
 ReverseNumber r1;
 r1.setData(-789);
 cout<<"revers number is "<<r1.getData();

    return 0;
}