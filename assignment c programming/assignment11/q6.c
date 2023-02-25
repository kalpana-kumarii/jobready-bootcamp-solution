// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void primeFind(int,int);
void primeFind(int a,int b){
        int i,c;
        for(i=a;i<=b ;i++){
            c=0;
          for(int j=2;j<i;j++){
            if(i%j==0){
               c=1;
               break;
            }
          }
        
          if(c==0){            
           printf("%d ",i);    
          }
          
        } 
         
       
}
int main(){
primeFind(1,30);
    return 0;
}