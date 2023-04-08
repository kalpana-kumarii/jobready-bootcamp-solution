// 9. Given a Doubly linked list containing N nodes, the task is to remove all the nodes
// from the list which contains elements whose digit sum is even.
// Example:
// Input: DLL = 18 <=> 15 <=> 8 <=> 9 <=> 14
// Output: 18 <=> 9 <=> 14
// Explanation:
// The linked list contains :
// 18 -> 1 + 8 = 9
// 15 -> 1 + 5 = 6
// 8 -> 8
// 9 -> 9
// 14 -> 1 + 4 = 5
// Here, digit sum for nodes containing 15 and 8 are even.
// Hence, these nodes have been deleted.
// Input: DLL = 5 <=> 3 <=> 4 <=> 2 <=> 9
// Output: 5 <=> 3 <=> 9
// Explanation:
// The linked list contains two digit sum values 4 and 2.
// Hence, these nodes have been deleted.
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
        void removeEvenDigit(){
            node *t=head;
            // Input: DLL = 18 <=> 15 <=> 8 <=> 9 <=> 14
            // Output: 18 <=> 9 <=> 14
         while(t->next->next!=NULL){
                if(t->next->val & 1==0){
                    node *temp=t->next;
                    t->next=t->next->next;
                    t->next->prev=t;
                    delete temp;
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
    d.insertATEnd(31);
    d.insertATEnd(43);
    d.insertATEnd(56);
    d.insertATEnd(6);
    d.print();
    d.removeEvenDigit();
    d.print();
    return 0;
}