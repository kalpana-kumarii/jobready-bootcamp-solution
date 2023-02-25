// 8. Write a program to check whether a given number is a Prime number or
// not
#include<stdio.h>
int main(){
int num,i,k=0;

printf("Enter no.");
scanf("%d",&num);
for(i=2;i<num;i++){
      //printf("%d ",i);
    if(num%i==0){      
        k=0;       
        break;
    }else{
        k++;
    }
}
if(k>0){
    printf("Prime");
}else{
 printf("Not prime");
}

    return 0;
}