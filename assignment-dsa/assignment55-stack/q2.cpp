#include<bits/stdc++.h>
using namespace std;
bool areaBracketBalanced(string exp){
    stack<char>temp;
    for(int i=0;i<exp.length();i++){
        if(temp.empty()){
            temp.push(exp[i]);
        }
        else if((temp.top()=='(' && exp[i]==')')
        || (temp.top()=='{' && exp[i]=='}')
        || (temp.top()=='[' && exp[i]==']')
        ) {
            temp.pop();
        }
        else{
            temp.push(exp[i]);
        }

    }
    if(temp.empty()){
        return true;
    }
    else
    return false;
}
int main(){
string exp="{(}{[()]";
if(areaBracketBalanced(exp)){
    cout<<"Balanced"<<endl;
}
else{
    cout<<"Not Balanced"<<endl;
}
    return 0;
}