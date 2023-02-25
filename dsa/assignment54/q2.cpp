// 2. Create an array and implement a search function in the array.
#include<iostream>
using namespace std;

class Array{
    int size;
    int a[100];

 
    public:
    Array(){
       size=0; 
    }
    
    void insert(int index, int value){
       size++;
       a[index]=value;
    }
    int  search(int value){
         for(int i=0;i<size;i++){
            if(a[i]==value)
            return i;
         }
         return -1;
    }

    void printArray(){
        cout<<"your array is ";
        for(int i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

};

int  main(){
Array a;
int ip;
cout<<"enter 5 elements"<<endl;
for(int i=0;i<5;i++){    
    cin>>ip;
    a.insert(i,ip);

}
a.printArray();
cout<<"enter element to search"<<endl;
int e;
cin>>e;
cout<<a.search(e);
    return 0;
}