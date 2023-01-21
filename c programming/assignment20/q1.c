// 1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swapa(int*, int*);

void swapa(int* a,int* b){
 int t;
 t=*a;
 *a=*b;
 *b=t;
 
}
int main(){
int a=3;
int b=4;
swapa(&a,&b);

printf("Atfer swapping a=%d b=%d",a,b);

    return 0;
}