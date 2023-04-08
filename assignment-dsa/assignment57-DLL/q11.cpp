// 1. Given a linked list and a key ‘X‘ in, the task is to check if X is present in the linked list
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


    bool findElement(int key){
        //  Input: 14->21->11->30->10, X = 14
        // Output: Yes


        node *t1=head;
        node *t2=head;
        while(t1!=NULL){
            if(t1->val==key ){
               return 1;
            }
            t1=t1->next;
        }

        return 0;
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
    if(d.findElement(5)!=0){
    cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}