//{ Driver Code Starts
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int countWords(string s);

// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
    //code here.
    int n=s.size();
int i=0;
int c=0;
while(i<n){
    if((s[i]==' ')&&(s[i+1]!=' ')){
        c++;
    }
    else if(s[i]=='\\' && s[i+1]=='n'){
        c++; 
        
    }
   else  if(s[i]=='\\' && s[i+1]=='t'){c++; }
    i+=1;
}

return c+1;
}

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }

        return 0;
}