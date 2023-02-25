#include<iostream>
using namespace std;

class Stack{
    int s[100];
    int top;

    public:

    Stack(){
        top=-1;
    }
    ~Stack(){
        top=-1;
    }

    void push(int value){
        if(top==99){
            cout<<"Stack overflow"<<endl;
        }
        else{
        top++;    
        s[top]=value;
        }
    }

    int isStackEmpty(){
        if(isStackFull()){
            return 1;
        }
        else{
            return  0;
        }
    }

     int isStackFull(){
        if(top==99){
            return 1;
        }
        else{
            return  0;
        }
    }

    int pop(){
        if(isStackEmpty()){
            cout<<"Stack underflow"<<endl;
        }
        else{
            //top--;
            return s[top--];            
        }
    }

    int Top(){
        if(isStackEmpty())
            {cout<<"Stack underflow"<<endl;
            return -1;}
        else
            return s[top];
    }

    int size(){
        return top+1;
    }

    void printStack(){
    for(int i=0;i<=top;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

    }


};

int main(){
Stack s;
// s.push(1);
// s.push(2);
// s.push(3);
// s.push(4);
// s.printStack();

int choice;
while(choice!=5){
    cout<<"1. push"<<endl;
    cout<<"2. pop"<<endl;
    cout<<"3. get top"<<endl;
    cout<<"4. get size"<<endl;
    cout<<"5. print stack"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        {
            int v;
            cout<<"enter a number";
            cin>>v;
            s.push(v);
            break;

        }
        case 2: 
        {
            int value=s.pop();
            cout<<"deleted value is "<<value;
            break;
        }
        
         case 3:
         {
            cout<<"top of the stack"<<s.Top()<<endl;
            break;
         }
         case 4:
         {
            cout<<"Size of the stack"<<s.size()<<endl;
            break;
         }
        case 5:
        {
            s.printStack();
            break;
        }

         case 6:
         {
            exit(0);
         }
    }

}
    return 0;
}