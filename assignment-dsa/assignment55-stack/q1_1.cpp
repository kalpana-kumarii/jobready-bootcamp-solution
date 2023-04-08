#include<bits/stdc++.h>
using namespace std;

void deleteMid_utils(stack<char>&s ,int sizeOfStack, int current){
if(current==sizeOfStack){
    s.pop();
    return;
}
int x=s.top();
s.pop();
current++;
deleteMid_utils(s,sizeOfStack,current);
s.push(x);
}

void deleteMid(stack<char>&s ,int sizeOfStack){
    deleteMid_utils(s,sizeOfStack,0);
}
int main(){
stack<char>st;
st.push('1');
st.push('2');
st.push('3');
st.push('4');
st.push('5');
st.push('6');
st.push('7');
st.push('8');
deleteMid(st,st.size());
    return 0;
}
