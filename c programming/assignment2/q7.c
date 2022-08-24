// 7. Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
    int n = 32, c = 0, res;

    while (n != 0)
    {
        c++;
         if (n&1 == 1)
        {
            printf("%d", c);
            break;
        }
         
           n= n >> 1;
      
       
       
    }

    return 0;
}
