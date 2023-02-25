// 8. Write a function to count words in a given string

#include<stdio.h>
#include <string.h>
int countWords(char*);

int countWords(char s[]){
    int n=strlen(s)-1;
    int c=0;
    for(int i=0;s[i];i++){
        if(s[i]==' ' && s[i+1]!=' '){
            c++;
        }
    }
return c+1;
}
int main(){

    char str[]="hello i love programming";
    printf("%d",countWords(str));
    return 0;
}