#include<iostream>
using namespace std;

class Stack{
int top=-1;
int size=100;
int arr[100];
public:

void push(int v){
if(top==size-1){
    cout<<"stack is full"<<endl;
}
else{
    arr[++top]=v;
}

}

void pop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        top--;
    }
}
void display(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
};


int main(){
 Stack s;
 s.push(5);
 s.push(10);
 s.pop();
 s.pop();
 s.pop();
 s.display();
    return 0;
}