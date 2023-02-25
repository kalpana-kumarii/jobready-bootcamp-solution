#include<iostream>
using namespace std;

int main(){
// int *p=new int;
int *p=new int(10); //single 4byte momory created

int *a=new int[10]; //array of 10 size

if(!p){
    cout<<"insufficient memory\n";
    return 0;
}

// cout<<*p;

cout<<"enter 10 values"<<endl;
for(int i=0;i<10;i++){
    cin>>a[i];
}
cout<<"values are"<<endl;
for(int i=0;i<10;i++){
   cout<<a[i]<<" ";
}
delete []a ;
delete p;
    return 0;
}