#include<iostream>
#include<cstdlib>
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

class LinkedList{
public:
node * head;
   LinkedList(){
        head=NULL;
    }
    void insertAtEnd(int v){
        node* temp=new node();
        temp->value=v;
        if(head==NULL){
            head=temp;
        }
        else{
            node* t=head;
            while (t->next!=NULL)
            {
              t=t->next;
            }
            t->next=temp;
        }
    }
    void insertAtBegin(int v){
        node* temp=new node();
        temp->value=v;
        if(head==NULL){
            head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
    }

    void insertAtMiddle(int v, int n){
        node* temp=new node();
        temp->value=v;
       
        if(n==1){
            temp->next=head;
            head=temp;
        }
        else{
              node* t=head;
        while(n>2){
           
            n--;
              if(t->next==NULL){
                cout<<"\nposition not found\n";
                return;
            }else{
            t=t->next;}
        }
        temp->next=t->next;
        t->next=temp;
        }
    }
    void display(){
        node* temp=head;
       
        while (temp!=NULL)
        {
            cout<<temp->value<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
  
};

int main(){

        LinkedList s1;
        s1.insertAtEnd(3);
        s1.insertAtEnd(5);
         s1.insertAtEnd(8);
        s1.insertAtBegin(1);
        s1.display();
        s1.insertAtMiddle(2,6);
        s1.display();

        return 0;
}

