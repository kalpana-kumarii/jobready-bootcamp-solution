// 6. Write a program to reverse a string.

#include<stdio.h>
int main(){
char str[]="abcd";
int i,j,k;
for(i=0;str[i];i++);
char temp[i];
for(j=0;j<i;j++){  

  temp[j]=str[i--];
  
 // printf("%c %d\n",str[j],j);
}


printf("%s",temp);
    return 0;
}