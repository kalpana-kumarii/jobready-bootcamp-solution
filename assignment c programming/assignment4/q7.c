// 7. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main(){
int i;
for(i=20;i>=0;i=i-2){
    printf("%d ",i);
}
printf("\n");
for(i=10;i>=0;i--){
    printf("%d ",2*i);
}

//Method 3
    // int i = 0, x = 10;
    // while (1)
    // {
    //     if (i % 2 == 0)
    //     {
    //         x--;
    //     }        
    //     i++;
    //     if (x == 0)
    //     {
    //         break;
    //     }
    // }



    // while(i>=0){
    //     if(i%2==0){
    //         printf(" %d",i);
    //     }
    //     i--;
    // }
    return 0;
}