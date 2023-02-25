// 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
int num,i,res=1;
printf("Enter no. to calculate factorial of a number");
scanf("%d",&num);
for(i=1;i<=num;i++){
    res=res*i;
}
// for(i=num;i>0;i--){
//     res=res*i;
// }
printf("Factorial of %d is %d",num, res);
    return 0;
}