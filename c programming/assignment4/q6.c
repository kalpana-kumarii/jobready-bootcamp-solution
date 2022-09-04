// 6. Write a program to print the first 10 even natural numbers
#include<stdio.h>
int main(){
int i;
for(i=0;i<=20;i=i+2){
    printf("%d ",i);
}
printf("\n");
for(i=0;i<=10;i++){
    printf("%d ",2*i);
}
//  int i = 0, x = 0;
//     while (1)
//     {
//         if (i % 2== 0)
//         {
//             printf("%d ", i);
//             x++;
//         }
//         i++;
       
//         if (x == 10)
//         {
//             break;
//         }
//     }
    return 0;
}