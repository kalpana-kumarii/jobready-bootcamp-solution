// 7. Given a Linked List and a number N, write a function that returns the value at the Nth
// node from the end of the Linked List.
// Examples:
// Input: 1 -> 2 -> 3 -> 4, N = 3
// Output: 2
// Input: 35 -> 15 -> 4 -> 20, N = 4
// Output: 35
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node* next;

    node(){
        value=0;
        next=NULL;
    }
};
class SLL{
    public:
    node* head;
    SLL(){
        head=NULL;
    }

    void insertAtEnd(int value){
        node * temp=new node();
        temp->value=value;
        
        if(head==nullptr){
          head=temp;
        }
        else{
            node* t=head;
            while(t->next!=nullptr){
                t=t->next;
            }
            t->next=temp;
        }
    }
    void printLL(){
       node* t=head;
       while(t!=nullptr){
                cout<<t->value<<"->";
                t=t->next;
        }
        cout<<"NULL"<<endl;
    }
void nthNodeFromLast(int n){

    stack<int>s;
    node *t=head;
    while(t!=NULL){
        s.push(t->value);
        t=t->next;
    }
 
    while(n>2){
        s.pop();
        n--;
    }
    cout<<s.top()<<endl;
}

};

int main(){
    SLL  l;
    // Input: 1 -> 2 -> 3 -> 4, N = 3
// Output: 2
    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(3);
    l.insertAtEnd(4);
    l.insertAtEnd(5);
        l.printLL();
    l.nthNodeFromLast(1);
 
    // l.printLL();
   
    
   
 
}