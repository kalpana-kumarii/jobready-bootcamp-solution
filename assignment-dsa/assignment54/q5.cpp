// 5. Create a function in Array to check the size of an array.


#include<iostream>
using namespace std;

class Array{
    int array[100];
    int size;

    public:

    Array(){
        size=0;
    }

    void insert(int index, int value){
        size++;
        if(size==100){
            cout<<"Array is full"<<endl;
        }
        if(index>=size){
            cout<<"Index is larger than size"<<endl;
        }
        array[index]=value;
    }
    int getSize(){
        return size;
    }

    void printArray(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Array a;
    a.insert(0,2);
    a.insert(1,56);
    a.insert(2,4);
    a.printArray();
    cout<<"size of the array "<<a.getSize();
  

    return 0; 
}