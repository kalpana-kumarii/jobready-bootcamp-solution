// 3. Write a program to count vowels in a given string

#include<stdio.h>
int main(){
     char str[]="Apple World";
     int i,c=0;
     for(i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u' 
        || str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U'){
            c++;
        }
     }

     printf("%d",c);
    return 0;
}