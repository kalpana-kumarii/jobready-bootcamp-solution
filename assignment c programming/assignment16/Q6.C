// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>

int main(){
int a1[3][3]={{1,7,3},{4,5,6}};
int totalrow=0;
int totalcol=0;
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       totalrow+=a1[i][j];
      totalcol+=a1[j][i];
       //printf("%d ",a1[j][i]);
     }
    // printf("\n");
     //printf("%d %d\n",totalrow,totalcol);
}
printf("\nsum of rows=%d and columns=%d of a Matrix.",totalrow,totalcol);
    return 0;
}