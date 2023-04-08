// 5. Given an unsorted doubly linked list containing n nodes. The problem is to remove
// duplicate nodes from the given list.

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

    void removeDuplcatesSorted(){
        if(head->next==NULL){
            return ;
        }

        node *t1=head;
        while(t1->next!=NULL){
            t1=t1->next;
        }
        node *t2=t1;
        t1=head;

        while(t1!=t2){
            if(t1->val==t2->val){
                node *temp=t1;
                t1->prev->next=t1->next;
                t1->next->prev=t1->prev;
                delete temp;
            }
            else{
                t1=t1->next;
                t2=t2->prev;
            }
        }
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
    d.insertATEnd(1);
    d.insertATEnd(1);
    d.insertATEnd(2);
    d.insertATEnd(3);
    d.insertATEnd(4);
    d.insertATEnd(4);
    d.insertATEnd(4);
    d.insertATEnd(5);
    d.insertATEnd(6);
    d.insertATEnd(6);
    d.insertATEnd(6);
    d.print();
    d.removeDuplcatesSorted();
    d.print();

    return 0;
}