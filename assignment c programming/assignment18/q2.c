// 2. Write a function to reverse a string.
#include<stdio.h>
void  reverseString(char*);

void  reverseString(char str[]){
    char rev[10];
    int j=0;
    for(int i=9;i>=0;i--){
        rev[j++]=str[i];
    }

    printf("%s",rev);
}
int main(){
char str[]={"helloworld"};
reverseString(str);
    return 0;
}