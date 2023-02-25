// 7. Write a program to count digits in a given number
#include<stdio.h>
int main(){
int num,count;
printf("Enter no.");
scanf("%d",&num);
count=0;

//==============Method 1=============

// if(num==0){
//     count++;
// }else{
// while(num!=0){ 
//     num=num/10;
//      count++;
// }}

//==============Method 2=============

do{
     
        num=num/10;
         count++;

}while (num!=0);


printf("%d",count);

    return 0;
}