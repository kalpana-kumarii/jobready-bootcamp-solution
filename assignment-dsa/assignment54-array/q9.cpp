// 9. Create an array and implement a search function in the array.

// 6. Create a Dynamic array without using STL.

#include<iostream>
using namespace std;

class DynamicArray{
    int *array;
    int size;
    int capacity;
public:
    DynamicArray(){
        array=new int[1];
        size=0;
        capacity=1;
    }
    ~DynamicArray(){
        delete []array;
        size=0;
        capacity=0;
    }


int search(int value){
    for(int i=0;i<size;i++){
        if(array[i]==value)
            return i;        
    }
    return -1;
}


    void insert(int index, int value){
        if(capacity==size){
            resize();
        }
        if(index>=capacity || index<0){
            cout<<"Index out of range"<<endl;
        }

        array[index]=value;
        size++;
    }
        void resize(){
        int *temp=new int[2*capacity];
        for(int i=0;i<size;i++){
            temp[i]=array[i];
        }
    delete array;
    array=temp;
    capacity*=2;
    }
    
    void printArray(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    cout<<"Size "<<size<<" capacity "<<capacity<<endl;
    }
};

int main(){

    DynamicArray a;
    a.printArray();
    a.insert(0,10);
    a.printArray();
    a.insert(1,20);
    a.printArray();
    a.insert(2,30);
    a.printArray();

    a.insert(3,40);
    a.printArray();
    int k=a.search(300);
    if(k!=-1){
        cout<<"Element found at "<<k<<" index"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}