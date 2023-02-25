// 9. Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int num1, num2, i = 0, k = 0, lcm = 1;
    printf("Enter no.");
    scanf("%d%d", &num1, &num2);

    // method 2

    while (num1 > 1 && num2 > 1)
    {

        i++;
        if (num1 % i == 0)
        {
            if (num2 % i == 0)
            {
                lcm = lcm * i;
                num1 = num1 / i;
                num2 = num2 / i;
            }
            else
            {
                lcm = lcm * i;
                num1 = num1 / i;
            }
        }

        if (num2 % i == 0)
        {
            if (num1 % i == 0)
            {
                lcm = lcm * i;
                num1 = num1 / i;
                num2 = num2 / i;
            }
            else
            {
                lcm = lcm * i;
                num2 = num2 / i;
            }
        }
        // printf("num1 %d num2 %d  i %d lcm %d\n",num1,num2,i,lcm);
    }
    lcm = lcm * num1 * num2;
    printf("\n\nnum1 %d num2 %d  i %d lcm %d\n", num1, num2, i, lcm);

    return 0;
}