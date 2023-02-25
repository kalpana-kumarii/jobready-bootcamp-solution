#include<iostream>
using namespace std;

class Array{

    int a[10];
    int size=0;
    public:
    void insert(int index,int value){
        a[index]=value;
        size++;
    }

    int get(int index){
        return a[index];
    }
    int getsize(){
        return size;
    }
    int search(int v){
        for(int i=0;i<size;i++){
            if(a[i]==v)
            return i; ///return index of value
        }
        
        return -1;
    }
    void delete1(int index){
        for(int i=index;i<size-1;i++){
            a[i]=a[i+1];
        }
        a[size-1]=0;
        size-=1;
    }

    void printArray(){
        for(int i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
    }

};

int main(){
int n,x;
Array a;
cout<<"enter a number"<<endl;
cin>>n;
cout<<"enter "<<n<<" elements"<<endl;
   for (int i=0;i<n;i++){
    cin>>x;
    a.insert(i,x);
   }
for(int i=0;i<a.getsize();i++){
    cout<<a.get(i)<<" ";
}
cout<<"enter element u want to search"<<endl;
int value;
cin>>value;
int index=a.search(value);
if(index!=-1){
    cout<<"element found at index  "<<index<<endl;
}
else{
    cout<<"element not found ";
}

cout<<"which elemnent u want to delete"<<endl;
cin>>index;
a.delete1(index);
a.printArray();





    return 0;
}