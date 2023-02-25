// 3. Create a function in Array to reverse an array.
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

    void reverseArray(){
        int i=0;
        int j=size-1;
        while(i<=j){
            int temp;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            i++;
            j--;
        }
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
    int n,v;
    cout<<"Enter no. of elements you want to"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>v;
        a.insert(i,v);
    }
    a.printArray();
    a.reverseArray();
    a.printArray();

    return 0; 
}