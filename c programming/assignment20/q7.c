// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include<stdio.h>

int main(){
char a[]="helloa world";
char *p;
p=a;
int v=0,c=0;
for(int i=0;*(p+i);i++){
    if(*(p+i)=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u'){
        v++;
    }else{
        c++;
    }
}
printf("%d %d",v,c);
    return 0;
}