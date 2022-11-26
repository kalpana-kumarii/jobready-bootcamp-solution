#include<stdio.h>
int main(){

    int i,j;
    for(i=1;i<=5;i++){
     
        for(j=1;j<=5;j++){ 
           if(i==5){
            if(j<=i){
              printf("* ");
            }
           }
           else{
            if(j==6-i || j==5 ){

              printf("* ");
            }
              else{
            printf("  ");
               } 
           
           }
              
        }
    
        printf("\n");
    }
    
    return 0;
}