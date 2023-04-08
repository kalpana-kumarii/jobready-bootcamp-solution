// 9. In a singly linked list of characters, write a function that returns true if the given list is
// a palindrome, else false.

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
bool isPalin(){
    node *t=head;
    stack<int>s;
    while(t!=NULL){
        s.push(t->value);
        t=t->next;
    }
 
    t=head;
    int n=(s.size())/2;
    while (n>0 ) //or !s.empty()
    {
        // cout<<"hello";
       if(s.top()!=t->value){
        return false;
       }
       else{
        s.pop();
        t=t->next;
       }
       n--;
    }
   return true; 
}

};

int main(){
    SLL  l;

    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(6);
    l.insertAtEnd(2);
    l.insertAtEnd(1);
    l.printLL();
    l.printLL();
    int x=l.isPalin();
    if(x!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    l.printLL();
   
    
   
 
}