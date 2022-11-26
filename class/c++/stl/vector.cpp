#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
vector<int>v;
vector<int>v2 ={1,2,3};
int main(){
 
cout<<"size= "<<v.size()<<endl;
cout<<"capacity "<<v.capacity()<<endl;
for(int i=1;i<=17;i++)
v.push_back(i*100);
cout<<"size= "<<v.size()<<endl;
cout<<"capacity "<<v.capacity()<<endl;
v.resize(5);
v.shrink_to_fit();
cout<<"size= "<<v.size()<<endl;
cout<<"capacity "<<v.capacity()<<endl;
// for(int i=0;i<=v.size();i++){
//     cout<<v.at(i)<<" ";
// }
//empty()
if(v.empty()==true){
cout<<"Vectore is empty";
}
else{
cout<<"Vectore is not empty";
}
cout<<endl;

// vector iterator 
vector<int>:: iterator it; //just like int *p;
//it=v.begin();
// it=v.end()

// appraoch 1
for(it=v.begin(); it!=v.end(); it++){
    cout<<*it<<" ";
}
cout<<endl;
for(auto it=v.rbegin(); it!=v.rend(); ++it){
    cout<<*it<<" ";
}
cout<<endl;
v.swap(v2);
// appraoch 2
cout<<"second apprach"<<endl;
it=v2.begin();
for(int i=0; i<v2.size(); i++){
    cout<<*(it+i)<<" ";
    //cout<<it[i]<<" ";
}
cout<<endl;

vector<int>v3;
// assign() function
v3.assign(5,10);
v3.insert(v3.begin(),12);
v3.insert(v3.end(),8);
for(int i=0; i<v3.size(); i++){   
    cout<<v3[i]<<" ";
}
cout<<endl;























return 0;
}