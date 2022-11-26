// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
float circle(int);
 float circle(int a){
    return 3.14*a*a;
  }
int main(){
int r=3;
 printf("Area of circle is %f",circle(r));
return 0;

}