// 2. Write a function that takes a list sorted in non-decreasing order and deletes any
// duplicate nodes from the list. The list should only be traversed once.
// For example if the linked list is 11->11->11->21->43->43->60 then
// removeDuplicates() should convert the list to 11->21->43->60.
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
    void removeDuplicates(){
        cout<<"Hello"<<endl;
        node* t1=head;    
      
             while (t1->next!=NULL)
                {
                    // if(t1->next==NULL){
                    //     return;
                    // }
                    if(t1->value==t1->next->value){
                        node *temp=t1->next;
                        t1->next=temp->next;
                        delete temp;
                    }
                    else{
                        t1=t1->next;
                    }
                
                }
        }
    
  
};

int main(){
    SLL  l;
    // For example if the linked list is 11->11->11->21->43->43->60 then
// removeDuplicates() should convert the list to 11->21->43->60.
    l.insertAtEnd(11);
    l.insertAtEnd(11);
    l.insertAtEnd(11);
    l.insertAtEnd(43);
    l.insertAtEnd(43);
    l.insertAtEnd(50);
    l.insertAtEnd(50);
    l.insertAtEnd(60);
    l.printLL();
    l.removeDuplicates();
    l.printLL();
    // l.printLL();
   
 
}