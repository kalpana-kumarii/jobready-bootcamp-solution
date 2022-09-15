// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
// 4. Write a program to calculate HCF of two numbers

#include <stdio.h>
int main()
{
    int num1, num2, i = 0, k = 0, hcf = 1;
    printf("Enter no.");
    scanf("%d%d", &num1, &num2);

    // method 1

    while (num1 > 1 && num2 > 1)
    {
        i++;
        if (num1 % i == 0)
        {
            if (num2 % i == 0)
            {
                hcf = hcf * i;
                num1 = num1 / i;
                num2 = num2 / i;
            }
            else
            {

                num1 = num1 / i;
            }
        }

        if (num2 % i == 0)
        {
            if (num1 % i == 0)
            {
                hcf = hcf * i;
                num1 = num1 / i;
                num2 = num2 / i;
            }
            else
            {

                num2 = num2 / i;
            }
        }
       // printf("\n\nnum1 %d num2 %d  i %d hcf %d\n", num1, num2, i, hcf);
    }
    if(hcf==1){
        printf("Co-prime");
    }else{
        printf("Not Co-prime");
    }
    //printf("HCF is %d", hcf);

    return 0;
}