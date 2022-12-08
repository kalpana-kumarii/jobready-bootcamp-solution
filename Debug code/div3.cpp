//{ Driver Code Starts
#include<iostream>
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        int index=0;
         vector<int> t;
        for(int i=0;i<q;i++){
            for(int j=1;j<query[i];j++){
                int c=0;
                for(int k=1;k<=j;k++){
                    if(j%k==0){
                        c++;
                    }
                    if(c==3){
                       t.push_back(++index);
                    }
                }
            }
        }
        
        return t;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends