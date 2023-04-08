// 1. An example of a linked list with a random pointerGiven a linked list of size N where
// each node has two links: one pointer points to the next node and the second pointer
// points to any node in the list. The task is to create a clone of this linked list in O(N)
// time.

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

        void findPairSum(int sum){

            node *t=head;
            while(t->val<=sum && t->next!=NULL){
                t=t->next;
            }
            node *t2=t;           
            t=head;
            while(t2!=t){
                // cout<<" "<<t->val<<" "<<t2->val<<" "<<endl;
                if(t->val+t2->val==sum){
                    cout<<"( "<<t->val<<" "<<t2->val<<" )"<<endl;
                    t2=t2->prev;
                }
                else if(t->val+t2->val>sum){
                    t2=t2->prev;
                }
                else{
                    t=t->next;
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
    d.insertATEnd(2);
    d.insertATEnd(3);
    d.insertATEnd(4);
    d.insertATEnd(5);
    d.insertATEnd(6);
  d.print();
  d.findPairSum(7);
    return 0;
}