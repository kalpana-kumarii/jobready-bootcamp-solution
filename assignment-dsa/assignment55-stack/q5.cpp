// Input:
// Stack: 11 2 32 3 41
// 5. Reverse the string using stack.

#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<char>st){
    stack<char>temp;

    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    while (!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}


void printStack(stack<char>st){
while (!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;
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
    printStack(st);
    reverseStack(st);
    return 0;
}