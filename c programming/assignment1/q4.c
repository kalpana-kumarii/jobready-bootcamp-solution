#include<stdio.h>
int main(){
    float r,area;
    printf("enter radius for calculating areaa of circle");
    scanf("%f", &r);
    area = 3.14*r*r;
    printf("Area of circle is %f having the radius %f ", area,r);
    return 0;
}