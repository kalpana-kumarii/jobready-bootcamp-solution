// 2. Write a program to calculate the product of two matrices each of order 3x3.
// 7 7 6
// 8 6 5
// 6 7 5
#include <stdio.h>

int main()
{
    int a1[3][3] = {{1, 3, 2}, {3, 1, 1}, {1, 2, 2}};
    int a2[3][3] = {{2, 1, 1}, {1, 0, 1}, {1, 3, 1}};
    int mul[3][3];

    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            int res = 0;
            for (int k = 0; k < 3; k++)
            {
                res = res + a1[i][k] * a2[k][j];
            }
            mul[i][j] = res;
        }
    }

        printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}