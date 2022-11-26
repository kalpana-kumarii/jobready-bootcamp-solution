// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
int decimalToBinry(int,int);
int decimalToBinry(int n,int res){
   if(n==0){
    return res;
   }
res=res*10+(n%2);
 return decimalToBinry(n/2,res);


}

int main(){
   int n=decimalToBinry(78,0);
   int rem=0;
   // printf("%d",decimalToBinry(78,0));
   // printf("\n%d \n",n);
while (n>0)
{
   printf("%d",n%10);
   n=n/10;
}

    return 0;
}