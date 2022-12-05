#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int romanToDecimal(char str[]) {
        // code here
        // int cnvt[] = new int[26], res = 0;
        int cnvt[26], res = 0;
        cnvt['I'-'A'] = 1; cnvt['V'-'A'] = 5; cnvt['X'-'A'] = 10;
        cnvt['L'-'A'] = 50; cnvt['C'-'A'] = 100; cnvt['D'-'A'] = 500;
        cnvt['M'-'A'] = 1000;
        int len=0;
        for(int i=0;str[i];i++){
            len++;
        }
        cout<<"Length of string "<<len<<endl;
        for(int i = 0;str[i]; i++){
          
            int indx = str[i]-'A';
              cout<<"str[i]="<<str[i]<<" indx="<<indx<<" res="<<res<<" i="<<i<<endl;
            if(cnvt[indx] >= cnvt[indx+1])
            { res += cnvt[indx];}
            else
             {res -= cnvt[indx];}
             
        }
       // cout<<res<<endl;
       // int x=res+cnvt[str[len-1]-'A'];
       // cout<<x;
        return -res;
    }

int main(){
    char str[]="MMMDCCXCIV";
int k=romanToDecimal(str);
cout<<k;
    return 0;
}