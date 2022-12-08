// 5. Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

int main()
{
    int a[4][4] = {{1, 3, 2,4}, {3, 1, 1,4}, {1, 2, 2,4}, {1, 2, 2,4}};
    int res=0;
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<4; j++)
        {
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }
int i=0;
int j=3;
while (i<=j)
{
    if(i!=j){
    res=res+a[i][j]+a[j][i];
    }
    else{
        res+=a[i][j];
    }
   // printf("a[i][j]=%d a[j][i]=%d i=%d j=%d\n",a[i][j],a[j][i],i,j);
    
    i+=1;
    j-=1;
}


printf("\nsum of left diagonals of a matrix is %d",res);
    return 0;
}