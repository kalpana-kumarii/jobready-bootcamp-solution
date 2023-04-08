// 6. Given a singly linked list and a key, count the number of occurrences of the given key
// in the linked list. For example, if the given linked list is 1->2->1->2->1->3->1 and the
// given key is 1, then the output should be 4.


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
void countOccurance(int key){

    node *t=head;
    int count=0;
    while(t!=NULL){
        if(key==t->value){
            count++;
        }
        t=t->next;
     }
   cout<<count<<endl;
}

};

int main(){
    SLL  l;

    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(3);
    l.insertAtEnd(1);
    l.insertAtEnd(5);
    l.insertAtEnd(1);
    l.insertAtEnd(7);
    l.insertAtEnd(1);
    l.printLL();
    l.countOccurance(1);
    // l.printLL();
   
    
   
 
}