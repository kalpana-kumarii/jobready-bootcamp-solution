// 7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>
int palindrome(char*);

int palindrome(char str[]){
int n=strlen(str)-1;
int c=0;
for(int i=0;i<=n/2;i++){
    if(str[i]==str[n-i]){
        c=1;
    }
    else{
        c=0;
    }
}

return c;
}

int main(){
char str[]="abcba";
printf("%d ",palindrome(str));
    return 0;
}