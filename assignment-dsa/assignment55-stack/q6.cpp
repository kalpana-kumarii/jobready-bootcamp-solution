// 6. Given a string S, the task is to find the bracket numbers.
// Example 1:
// Input: S = "(aa(bdc))p(dee)â€‹"
// Output: 1 2 2 1 3 3
// Explanation: The highlighted brackets in the given string (aa(bdc))p(dee) has been
// assigned the numbers as: 1 2 2 1 3 3.
// Example 2:
// Input: S = "(((()("
// Output: 1 2 3 4 4 5
// Explanation: The highlighted brackets in
// the given string (((()( has been assigned
// the numbers as: 1 2 3 4 4 5
#include<bits/stdc++.h>
using namespace std;

void bracketNumbers(string s){
    stack<int>temp;
    int count=0;
    for(int i=0;i<s.length();i++){
      
        if( s[i]=='(' || s[i]=='{' || s[i]=='['){
            count++;
            temp.push(count);
            cout<<temp.top()<<" ";
        }
        if( s[i]==')' || s[i]=='}' || s[i]==']'){
            cout<<temp.top()<<" ";
            temp.pop();
        }
    }
    cout<<endl;

    // while(!temp.empty()){
    //     cout<<temp.top()<<" ";
    //     temp.pop();
    // }
}

int main(){
    string s = "(((()(";
    bracketNumbers(s);

    return 0;
}