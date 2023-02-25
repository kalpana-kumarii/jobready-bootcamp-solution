// 2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main(){
    char str[]="Welcomemmm";
    int i,c=0;
    for(i=0;str[i];i++){
        if(str[i]=='m'){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}