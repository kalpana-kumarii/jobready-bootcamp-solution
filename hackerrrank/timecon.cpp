#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
// int n=s.length();
char s0=s[0];
char s1=s[1];
int m=12+(s[0]-'0')*10+(s[1]-'0');
m=m%10;
s[1]=m+'0';
m=m%10;
s[0]=m+'0';
if(s[0]=='1' && s[1]=='2'){
    s[0]='0';
    s[1]='0';
}
return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
