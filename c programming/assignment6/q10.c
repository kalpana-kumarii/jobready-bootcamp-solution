// 10. Write a program to reverse a given number
#include<stdio.h>
int main(){
int num,rev=0,i;

printf("Enter no.");
scanf("%d",&num);

///Method 1

// while(num!=0){
//     rev=rev*10+num%10;
//     num=num/10;

// }
///Method 2

for(i=num;i!=0;i=i/10){
     rev=rev*10+i%10;
   
     
}
printf("revers num is %d ",rev);


    return 0;
}