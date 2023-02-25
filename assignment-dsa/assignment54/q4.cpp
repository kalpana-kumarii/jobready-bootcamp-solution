// 4. Create a function in Array to sort the given array

#include<iostream>
using namespace std;

class Array{
int array[100];
int size=0;

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

    void sortArray(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                int temp;
                if(array[i]<array[j]){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
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
    a.sortArray();
    a.printArray();

   
    return 0;
}