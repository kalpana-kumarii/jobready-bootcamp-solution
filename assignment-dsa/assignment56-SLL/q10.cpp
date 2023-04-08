// 10. Given a singly linked list, find the middle of the linked list. For example, if the given
// linked list is 1->2->3->4->5 then the output should be 3.
// If there are even nodes, then there would be two middle nodes, we need to print the
// second middle element. For example, if the given linked list is 1->2->3->4->5->6 then
// the output should be 4

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
void midElement(){
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
       s.pop();
       n--;
    }
   cout<<s.top();
}

};

int main(){
    SLL  l;

    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(3);
    l.insertAtEnd(2);
    l.insertAtEnd(1);
    l.insertAtEnd(1);
    l.printLL();
    l.midElement();
    

   
    
   
 
}