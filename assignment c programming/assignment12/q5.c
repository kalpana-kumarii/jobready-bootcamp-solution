// 5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
int FirstNEven(int,int);
int FirstNEven(int n,int k){ 
   if(k>n){
    return n;
   }  
   printf("%d ",k);
   return FirstNEven(n,k+2);    
}
int main(){
int n=10,k=0;
FirstNEven(n,k);
    return 0;
}