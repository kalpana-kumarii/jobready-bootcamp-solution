// 8. You are given the string S . Compress the string when lower and upper cases are the
// same. In compressed string characters should be in lowercase.
// Example 1:
// Input: S = "aaABBb"
// Output: "3a3b"
// Explanation: As 'a' appears 3 times consecutively and 'b' also 3 times, and 'b' and 'B'
// are considered the same.
// Example 2:
// Input: S = "aaacca"
// Output: "3a2c1a"
// Explanation: As 'a' appears 3 times consecutively and 'c' also 2 times, and then 'a' 1
// time.
#include<bits/stdc++.h>
using namespace std;
void compressString(string s){
    stack<char>t;
    int count = 1;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){           
            s[i]=s[i]+32;         
        }

             
    }

for(int i=s.length()-1;i>=0;i--){
  
    if(s[i]==s[i-1]){
        count++;
    }
    else{
        t.push(s[i]);
        t.push('0'+count);        
        count=1;
    }
}
    while(!t.empty()){
    cout<<t.top()<<" ";
    t.pop();
    }
}
int main(){
   string s = "aaaAggrR";
   compressString(s);
}