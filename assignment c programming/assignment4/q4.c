// 4. Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main()
{

int i;
for(i=1;i<=20;i=i+2){
    printf("%d ",i);
}
printf("\n");
for(i=1;i<=10;i++){
    printf("%d ",2*i-1);
}

    // int i = 0, x = 0;
    // while (1)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d ", i);
    //         x++;
    //     }
    //     i++;
       
    //     if (x == 10)
    //     {
    //         break;
    //     }
    // }
    //  printf("%d ", i);
    return 0;
}