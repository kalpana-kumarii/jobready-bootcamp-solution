// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main(){

int i;
// method 1
for(i=19;i>=1;i=i-2){
    printf("%d ",i);
}
//method 2
printf("\n");
for(i=10;i>0;i--){
    printf("%d ",2*i-1);
}

//method 3

    // int i = 0, x = 10;
    // while (1)
    // {
    //     if (i % 2 != 0)
    //     {
    //         x--;
    //     }
        
    //     i++;
    //     if (x == 0)
    //     {
    //         break;
    //     }
    // }

    // printf("%d",i);

    // while(i!=0){
    //     if(i%2!=0){
    //         printf(" %d",i);
    //     }
    //     i--;
    // }

    return 0;
}