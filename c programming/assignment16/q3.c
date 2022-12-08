// 3. Write a program in C to find the transpose of a given matrix.

#include<stdio.h>

int main(){
    int m=3;
    int n=2;
int a[2][3]={
    {1,2,3},
    {4,5,6}
    };
int t[3][2];
for(int i=0;i<3;i=i+1){
    for(int j=0;j<3;j++){
  //  printf("%d ",a[i][j]);
        t[i][j] = a[j][i];
    
    }

    printf("\n");
}

 printf("\n");
for(int i=0;i<3;i++){
    
     for(int j=0;j<2;j++){
        printf("%d ",t[i][j]);
     }
     printf("\n");
}
    return 0;
}