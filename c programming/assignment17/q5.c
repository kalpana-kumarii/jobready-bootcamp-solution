// 5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main(){
    char str[]="hello";
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]= str[i]+32;
        }
    }
printf("%s",str);
    return 0;
}