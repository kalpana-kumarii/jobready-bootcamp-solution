// 3. Given a sorted doubly linked list and a value to insert, write a function to insert the
// value in a sorted way. Initial doubly linked list
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
int val;
node *next;
node *prev;
node(){
    val=0;
    next=NULL;
    prev=NULL;
}
};
class DLL{
    public:
        node * head;
        DLL(){
            head=NULL;
        }

        void insertATEnd(int v){
            node *temp= new node();
            temp->val=v;
            if(head==NULL){
                head=temp;
            }
            else{
                node *t=head;
                while(t->next!=NULL){
                    t=t->next;
                }
                temp->prev=t;
                t->next=temp;
                

                
            }
        }
    void insertInsorted(int v){
        node *temp=new node();
        temp->val=v;
        node *t=head;
        while(t->val<v && t->next!=NULL){
            t=t->next;
        }
        if(t->next==NULL){
            
            temp->prev=t;
            t->next=temp;
        }else
        {temp->next=t->next;
        temp->next->prev=temp;
        t->next=temp;        
        temp->prev=t;}
    }

        void print(){
            node *temp=head;
            cout<<"NULL<=>";
            while(temp!=NULL){
                cout<<temp->val<<"<=>";
                temp=temp->next;
            }

            cout<<"NULL"<<endl;
        }


};

int main(){
    DLL d;
    d.insertATEnd(1);
    d.insertATEnd(2);
    d.insertATEnd(3);
    d.insertATEnd(4);
    d.insertATEnd(5);
    d.insertATEnd(6);
    d.print();
    d.insertInsorted(9);
    d.insertInsorted(12);
    d.insertInsorted(5);
    d.print();

    return 0;
}