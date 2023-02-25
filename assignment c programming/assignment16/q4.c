// 4. Write a program in C to find the sum of right diagonals of a matrix.

#include <stdio.h>

int main()
{
    int a1[3][3] = {{1, 3, 2}, {3, 1, 1}, {1, 2, 2}};
    int res=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if(i==j){
            res=res+a1[i][j];
           }
        }
    }


printf("sum of right diagonals of a matrix is %d",res);
    return 0;
}