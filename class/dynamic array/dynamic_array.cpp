#include<iostream>
using namespace std;



class DynamicArray{
    int *array;
    int size;
    int capacity;

    public:


    DynamicArray(){
        array= new int[1];
        size=0;
        capacity=1;
    }
    ~DynamicArray(){
        delete []array;
        size=0;
        capacity=0;
    }
    int getSize(){
        return size;
    }
    int getCapacity(){
        return capacity;
    }


void insertByShift(int index, int value){
 if(size==capacity){
       resize(); 
    }
    if(index>=capacity || index<0){
        cout<<"M memory not exist"<<endl;
    }
    for(int i=size;i>=index;i--){
        array[i]=array[i-1];
    }
    array[index]=value;
    size++;
}


void insert(int index,int value){
    if(size==capacity){
       resize(); 
    }
    if(index>=capacity || index<0){
        cout<<"memory not exist"<<endl;
    }
 
 array[index]=value;
 size++;

}

void resize(){
    int *temp=new int[2*capacity];
    for(int i=0;i<size;i++){
        temp[i]=array[i];
    }

    delete []array;
    array=temp;
    capacity=(2*capacity);

}

void delete1(int index){
    if(index>=size){
        cout<<"Index does not exist"<<endl;
    }
    for(int i=index;i<size;i++){
        array[i]=array[i+1];
    }
    size--;
}

void shrintTofit(){
    int *temp=new int[size];

    for(int i=0;i<size;i++){
        temp[i]=array[i];
    }
    delete []array;
    array=temp;
    capacity=size;
}

void printArray(){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Size "<<size<<" capacity "<<capacity<<endl;
}
int search(int v){
    for(int i=0;i<size;i++){
        if(array[i]==v){
            return i;
        }
    }
    return -1;
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

a.insertByShift(2,50);
a.printArray();

a.delete1(2);
a.shrintTofit();
a.printArray();
int i=a.search(200);
cout<<i<<endl;


    return 0;
}