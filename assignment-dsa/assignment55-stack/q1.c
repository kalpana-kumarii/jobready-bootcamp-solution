// 1. Given a stack with push(), pop(), empty() operations, delete the middle of the stack
// without using any additional data structure.
// Middle: ceil((size_of_stack+1)/2) (1-based index)
// Example 1:
// Input:
// Stack = {1, 2, 3, 4, 5}
// Output:
// ModifiedStack = {1, 2, 4, 5}
// Explanation:
// As the number of elements is 5, hence the middle element will be the 3rd element
// which is deleted
// Example 2:
// Input:
// Stack = {1 2 3 4}
// Output:
// ModifiedStack = {1 3 4}
// Explanation:
// As the number of elements is 4, hence the middle element will be the 2nd element
// which is deleted

#include<iostream>
using namespace std;
class Stack{
int top;
int s[100];
public:
    Stack(){
        top=-1;
    }
    void push(int value){
        if(top==100){
            cout<<"Stack overflow"<<endl;
        }else{
            top++;
            s[top]=value;
        }
    }

    int pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return s[top--];
    }

    void deleteMid(){
        int mid=(top)/2;
        cout<<"mid= "<<mid<<" top= "<<top<<endl;
        int temp[100];       
        int i=0;
    
            while(top>=0){
            if(top==mid){
                pop();
              
            }else{
                temp[i++]=pop();
                
            }
         }
        for(int j=0;j<i;j++){
            cout<<"t "<<temp[j]<<" ";
        }
        cout<<"i="<<i<<endl;
        i--;
        while(i>-1){
            push(temp[i--]);
        }
        cout<<endl;
        
    }
    void printStack(){
        for(int i=top;i>=0;i--){
            cout<<s[i]<<" ";
        }
        cout<<endl;

    }

};
  int main(){
Stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.printStack();
s.deleteMid();
s.printStack();
    return 0;
  }


