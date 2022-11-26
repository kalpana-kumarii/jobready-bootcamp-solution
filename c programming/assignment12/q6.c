// 6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
int FirstNEven(int);
int FirstNEven(int n){ 
   if(n<0){
    return 0;
   }  
   printf("%d ",n);
   return FirstNEven(n-2);    
}
int main(){
int n=10;
FirstNEven(n);
    return 0;
}