// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5;
    // int totalobmarks, passmarks;
    printf("Enter 5 subjects number  & Marks should not be greater than 100:");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);

    if (s1 <= 100 && s2 <= 100 && s3 <= 100 && s4 <= 100 && s5 <= 100)
    {
        if (s1 >= 33 && s2 >= 33 && s3 >= 33 && s4 >= 33 && s5 >= 33)
        {
            printf("Candidate passed");
        }
        else
        {
            printf("Candidate Failed");
        }
    }
    else
    {
        printf("Marks should not be greater than 100");
    }

    return 0;
}