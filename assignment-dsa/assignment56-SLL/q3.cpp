// 3. Given a singly linked list, write a function to swap elements pairwise.
// Input : 1->2->3->4->5->6->NULL
// Output : 2->1->4->3->6->5->NULL
// Input : 1->2->3->4->5->NULL
// Output : 2->1->4->3->5->NULL
// Input : 1->NULL
// Output : 1->NULL
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

   void swapElePair(){
    // Input : 1->2->3->4->5->6->NULL
    // Output : 2->1->4->3->6->5->NULL
    // Input : 1->2->3->4->5->NULL
    // Output : 2->1->4->3->5->NULL
    // Input : 1->NULL
    // Output : 1->NULL
        int temp;
        node *t=head;
        while(1){
          
        //   cout<<"HEllo"<<endl;
           if(t==NULL || t->next==NULL){
            return;
           }
                temp=t->value;
               t->value= t->next->value;
                t->next->value=temp;
                t=t->next->next;
            
        }


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
    l.insertAtEnd(8);
    l.printLL();
    l.swapElePair();
    l.printLL();
   
    
   
 
}