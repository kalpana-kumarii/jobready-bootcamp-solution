// 6. Write a program to calculate the length of the string using a pointer

#include<stdio.h>
int main(){

char a[]="hello";
char *p;
p=a;
int c=0;
for(int i=0;*(p+i);i++){
    c++;
}
printf("%d",c);
    return 0;
}