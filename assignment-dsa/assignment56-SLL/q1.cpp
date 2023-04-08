// 1. Given a linked list and a key ‘X‘ in, the task is to 
//check if X is present in the linked list
// or not.
// Examples:
// Input: 14->21->11->30->10, X = 14
// Output: Yes
// Explanation: 14 is present in the linked list.
// Input: 6->21->17->30->10->8, X = 13
// Output: No
#include<bits/stdc++.h>
using namespace std;
class node{
      public:
    node* next;
    int value;
  
    node(){
        next=nullptr;
        value=0;
    }

};

class SLL{
    public:
    node * head;
    
    SLL(){
        head=nullptr;
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
    bool findElement(int v){    
        node *t=head;
        while(t!=nullptr){
               if(t->value==v){
                return 1;
               }
                t=t->next;
        }
        return 0;
    }
};

int main(){
    SLL  l;
    //Input: 14->21->11->30->10, X = 14
    // Output: yes
    l.insertAtEnd(14);
    l.insertAtEnd(21);
    l.insertAtEnd(11);
    l.insertAtEnd(30);
    l.insertAtEnd(10);
    l.printLL();
    if(l.findElement(148)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
 
}