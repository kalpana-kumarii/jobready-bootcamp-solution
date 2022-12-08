// 1. Write a program to calculate the sum of two matrices each of order 3x3.
// 1 2 3
// 4 5 6
#include<stdio.h>

int main(){
int a1[3][3]={1,2,3,4,5,6,7,8,9};
int a2[3][3]={1,2,3,4,5,6,7,8,9};
int sum[3][3];
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        sum[i][j]=a1[i][j]+a2[i][j];
     }
}
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("%d ",sum[i][j]);
     }
     printf("\n");
}
    return 0;
}