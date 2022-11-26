#include<stdio.h>
int main(){

    int i,j,k;
    for(i=1;i<=5;i++){
        k=64;
        for(j=1;j<=9;j++){ 
            if(j<=5 && j>=6-i)
                 printf("%c ",++k);
            else if(j>=6 && j<5+i){
                  printf("%c ",--k);
            }
          else{
            printf("  ");
          } 
                 
        }
    
        printf("\n");
    }
    
    return 0;
}