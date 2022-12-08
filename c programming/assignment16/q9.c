// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>
int main(){
    int m=3;
    int n=2;
int a[3][3]={
    {1,0,3},
    {4,0,0},
    {0,0,0}
    };
int c=0;


for(int i=0;i<3;i++){
    
     for(int j=0;j<3;j++){
        printf("%d ",a[i][j]);
     }
     printf("\n");
}
  printf("\n");

for(int i=0;i<3;i=i+1){
    for(int j=0;j<3;j++){
        if(a[i][j]==0){
            c++;
        }       
    }  
    }
    
if(c>9-c){
     printf("accept matrix for sparse matrix");
}
else{
      printf("not accept matrix for sparse matrix");
}
   return 0;
}