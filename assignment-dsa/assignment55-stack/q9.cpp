// 9. Given two strings s and t, return true if they are equal when both are typed into empty
// text editors. '#' means a backspace character. Note that after backspacing an empty
// text, the text will continue empty.
// Example 1:
// Input: s = "ab#c", t = "ad#c"
// Output: true
// Explanation: Both s and t become "ac".
// Example 2:
// Input: s = "ab##", t = "c#d#"
// Output: true
// Explanation: Both s and t become "".
// Example 3:
// Input: s = "a#c", t = "b"
// Output: false
// Explanation: s becomes "c" while t becomes "b".

#include<bits/stdc++.h>
using namespace std;
bool isSameString(string s1, string s2){
    stack<char>t1,t2;
    for(int i=0;i<s1.length();i++){
        if(t1.empty()){
            t1.push(s1[i]);
        }
        if(s1[i]=='#'){
            t1.pop();
        }
        else{
            t1.push(s1[i]);
        }
    }

    for(int i=0;i<s2.length();i++){
        if(t2.empty()){
            t2.push(s1[i]);
        }
        if(s2[i]=='#'){
            t2.pop();
        }
        else{
            t2.push(s2[i]);
        }
    }
    if(t1.size()!=t2.size()){
        return 0;
    }
    else{
    while(!t1.empty()){
        if(t1.top()!=t2.top()){
            return 0;
        }
        t1.pop();
        t2.pop();
    }
    return 1;
    }
}

int main(){
    string s = "ab##", t = "c#d#";
    if(isSameString(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}