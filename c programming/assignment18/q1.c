// 1. Write a function to calculate length of the string
#include<stdio.h>
int length(char*);
int length(char str[]){
    int i;
for( i=0;str[i];i++);
return i;
}

int main(){
    char str[]={"helloworld"};
printf("Lenght of the is %d",length(str));
    return 0;
}