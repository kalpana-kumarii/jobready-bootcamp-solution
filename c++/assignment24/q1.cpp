// 1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
#include<stdio.h>
using namespace std;
int prime(int);
int main(){
int n=9;
printf("%d",prime(n));

    return 0;
}
//prime functon
int prime(int a){
         int i;
    for(i=2;i<a;i++){
        if(a%i==0)
            return 0;          
    }
      return 1;
}