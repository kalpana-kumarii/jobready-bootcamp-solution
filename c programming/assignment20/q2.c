// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
char strSwap(char *s1,char *s2){
int n= strlen(s1)>strlen(s2)?strlen(s1):strlen(s2);
printf("\n%d\n",n);
char temp;
for(int i=0;i<n;i++){
    temp=s1[i];
    s1[i]=s2[i];
    s2[i]=temp;
}
}

int main(){
char s1[]="hello";
char s2[]="worl";
printf("%s %s\n",s1,s2);
strSwap(s1,s2);
printf("%s %s",s1,s2);
    return 0;
}