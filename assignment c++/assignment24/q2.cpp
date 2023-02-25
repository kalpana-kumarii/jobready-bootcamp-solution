// 2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highestDigit(int);
int main(){
int n=26;
cout<<"Highest digit "<<highestDigit(n);

    return 0;
}
int highestDigit(int n){
int highval=0,rem=0;

while(n!=0){
    if(highval<rem)
    highval=rem;

    rem=n%10;
    n=n/10;
}
return highval;
}