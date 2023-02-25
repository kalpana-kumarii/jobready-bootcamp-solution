// 2. Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
float si(int,int,int);
 float si(int a,int b,int c){
    float si;
    si= (a*b*c)/100;
    return si;
  }
int main(){
int p,t,r;
p=100; t=2;
r=3;
 printf("Simple interes of  %f",si(p,t,r));
return 0;

}