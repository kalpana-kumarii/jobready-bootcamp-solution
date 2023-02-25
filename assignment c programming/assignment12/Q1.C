// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>
int naturalnum(int,int);
int naturalnum(int n,int k){ 
  
    if(k>n){
     return n;
    }     
     printf("%d ",k);          
    return naturalnum(n,k+1);
}
int main(){
int n=10,k=1;
naturalnum(n,k);
    return 0;
}