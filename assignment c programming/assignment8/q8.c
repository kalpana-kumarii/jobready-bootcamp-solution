
#include<stdio.h>
int main(){

    int i,j,k;
    for(i=1;i<=5;i++){
        k=0;
        for(j=1;j<=9;j++){ 
          if(j>=6-i && j<=5){
           
             printf("%d",++k);
             
          }
          else if( j>=6 && j<5+i){
           
            printf("%d", --k);
            
          } 
                 
          else{
            printf(" ");
          }
                 
        }
    
        printf("\n");
    }
    
    return 0;
}