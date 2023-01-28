// 7. From the list of IP addresses, check whether all ip addresses are valid.
#include <stdio.h>
#include <string.h>

int main()
{
    char ip[3][60] = {"123.33.45.67", "65.987.98.67", "56.98.0.87"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", ip[i]);
    }
    int st = 0, end = 0, flag = 0;
    int sum = 0, con = 0;
      int j ;
        int count=0 ;
    printf("Valid ip\n");

    for (int i = 0; i < 3; i++)
    {
         j = 0;
         count = 0;
         flag=1;
        while (ip[i][j] != '\0')
        {
            sum = 0;
            con = 0;
          
            while (ip[i][j] != '.')
            {
                con = ip[i][j] - '0';
                // printf("%c ",ip[i][j]);

                sum = sum * 10 + con;
                 printf("%d ",sum);
                j += 1;
                if (ip[i][j] == '\0')
                {
                    flag = 1;
                    break;
                }
            }
            j=j+1;
            // printf("%d",sum);
            if (sum <= 255 && sum>=0)
            {
               count=1;
            }
            else{
                count=0;
                break;
            }
           
            if(flag==1){
                break;
            }
        }
        if (count){
            printf("%s\n", ip[i]);}
    }

    return 0;
}