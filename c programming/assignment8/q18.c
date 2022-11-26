#include<stdio.h>
int main(){

    int i,j,k;
    for(i=1;i<=9;i++){
       
        for(j=1;j<=9;j++){ 

            if(i<6){
              
               if(j<=5 && j>=6-i){
                 printf("*");
               }
                else if(j>=5 && j<5+i){
                printf("*");
               } 
               else{
                printf(" ");
               }
            // if(j<5 && j>=i){
            //      printf("*");
            //    }

            //    else if(j>=4 && j<9-i){
            //     printf("*");
            //    }
            //    else{
            //     printf(" ");
            //    }
               
            }
            else
            {
              //k=i-5;  
              if(j<=5 && j>i-5){
                 printf("*");
               }

               else if(j>=5 && j<10-(i-5)){
                printf("*");
               }
               else{
                printf(" ");
               }
              
           }

           }   
    
        printf("\n");
    }
    
    return  0;
}