// 10. Write a recursive function to print reverse of a given numbe
#include<stdio.h>
int reverse(int);
int reverse(int n)
{
    if(n<0){
        n=-(n);
    }
    if(n==0){
        return 0;
    }
  printf("%d",n%10);
  return reverse(n/10);
}

#include<stdio.h>
int main(){
 reverse(4567);

    return 0;
}