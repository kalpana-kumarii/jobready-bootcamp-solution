// 8. Write a program in C to copy one string to another string.
#include<stdio.h>
int main(){
char str[]= "Hello";
int i;

printf("%s\n",str);

for(i=0;str[i];i++);
char str2[i-1];
for(int j=0;j<i;j++){
    str2[j]=str[j];
   // printf("str= %c str2=%c j=%d\n",str2[j],str[j],j);
}
// for(i=0;str2[i];i++);
// printf("%d\n",i);
for(int j=0;j<i;j++){
    printf("%c",str2[j]);
}
//printf("\n%s",str2);
    return 0;
}