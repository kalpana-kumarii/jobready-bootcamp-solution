#include<stdio.h>
int main(){

    int i,j,k;
    for(i=1;i<=5;i++){
        k=64;
        for(j=1;j<=9;j++){ 
           if(i==5){
            if(j<=6+i){
              printf("* ");
            }
           }

           else{
            if(j==6-i && j<=5 ){

              printf("* ");
            }
            else if(j<=9 && j==4+i)
            {
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