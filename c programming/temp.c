#include <stdio.h>
int main()
{
    int sq = 25;
    int i=0;
    while(i<sq/2){
        if(i*i==sq){
            printf("%d", i);
            break;
        }
          i++;
    }
    // for (i = 0; i <= (sq / 2); i++)
    // {
    //     // printf("%d", i);
    //     if (i*i == sq)
    //     {
    //         printf("%d", i);
    //         break;
    //     }
    // }
}