//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
#include<iostream>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        // Your code goes here
   
          int i=0;
        while(i<n-1){
             int correct= array[i]-1;
              int temp;
            if(array[i]!=array[correct]){
                 temp=array[i];
                array[i]=array[correct];
                array[correct]=temp;
                
            }
            else{
                i=i+1;
            }
        }
        // for(i=0;i<n;i++){
        //     if(array[i]!=i+1){
        //         return i+1;
        //     }
            
        // }
           
         cout<<"hello"<<endl;
         return 12;  
    }
};

//{ Driver Code Starts.

int main() {
    int t;
        int n;
        cout<<"Enter n";
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i){ cin >> array[i];}
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";

    return 0;
}
// } Driver Code Ends