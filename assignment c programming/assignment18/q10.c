// 10. Write a function to find the repeated character in a given string
#include<stdio.h>
#include<string.h>
void repeatedChar(char*, int);
void repeatedChar(char str[], int n){
int freq[256]={0};
int i=0;
while (i<n)
{
   freq[str[i]]+=1;
   i+=1;
}
i=0;
while (i<255)
{
if(freq[i]>1){
    printf("%c",i);
}
i+=1;
}
}
int main(){
char str[]="hellomAe112";
int n=strlen(str);
repeatedChar(str,n);
    return 0;
}