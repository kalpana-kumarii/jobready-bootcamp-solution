// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
int naturalOdd(int,int);
int naturalOdd(int n,int k){ 
   if(k>n){
    return n;
   }  
   printf("%d ",k);
   return naturalOdd(n,k+2);    
}
int main(){
int n=10,k=1;
naturalOdd(n,k);
    return 0;
}