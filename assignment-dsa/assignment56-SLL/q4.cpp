// 4. Write a function that moves the last node to the front in a given Singly Linked List.
// Examples:
// Input: 1->2->3->4->5
// Output: 5->1->2->3->4
// Input: 3->8->1->5->7->12
// Output: 12->3->8->1->5->7

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
void moveLastToFirst(){
// Examples:
// Input: 1->2->3->4->5
// Output: 5->1->2->3->4
// Input: 3->8->1->5->7->12
// Output: 12->3->8->1->5->7
    node *t=head;
    while(t->next->next!=NULL){
        t=t->next;
     }
    node *temp=t->next;
    t->next=NULL;
    temp->next=head;
    head=temp;

}

};

int main(){
    SLL  l;

    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(3);
    l.insertAtEnd(4);
    l.insertAtEnd(5);
    l.insertAtEnd(6);
    l.insertAtEnd(7);
    l.insertAtEnd(8);
    l.printLL();
    l.moveLastToFirst();
    l.printLL();
   
    
   
 
}