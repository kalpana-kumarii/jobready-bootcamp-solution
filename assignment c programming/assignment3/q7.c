// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
#include<stdio.h>

int main(){
int a,b,c,d;
printf("Enter a b c :");
scanf("%d%d%d",&a,&b,&c);

d= b*b-4*a*c;
// printf("%d\n", d);
if(d==0){
    printf("Real & Equal roots");
}
else if(d>0){
    printf("Real and Distinct roots");
}
else{
    printf("Imaginary roots");
}

    return 0;
}