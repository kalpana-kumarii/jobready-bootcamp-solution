// 4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nextPrime(int);
int nextPrime(int a){
        int i,c;
        for(i=a+1; ;i++){
            c=0;
          for(int j=2;j<i;j++){
            if(i%j==0){
               c=1;
               break;
            }
          }
        
          if(c==0){
            
             return i;       
          }
          
        } 
         
       
}
int main(){

printf("%d",nextPrime(1));
    return 0;
}