// 9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>
int octalToBinry(int,int);
int octalToBinry(int n,int res){
   if(n==0){
    return res;
   }
res=res*10+(n%8);
 return octalToBinry(n/8,res);


}

int main(){
   int n=octalToBinry(78,0);
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