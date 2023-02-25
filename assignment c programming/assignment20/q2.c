// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
void strSwap(char **s1,char **s2){
char *temp;
temp=*s1;
*s1=*s2;
*s2=temp;
}

int main(){
char *s1, *s2;
char a[]="hello";
char b[]="world";
s1=&a[0];
s2=&b[0];
printf("%s %s\n",s1,s2);
strSwap(&s1,&s2);
printf("%s %s",s1,s2);
    return 0;
}