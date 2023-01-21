// 3. Write a program to read and display a 2D array of strings in C language.

#include<stdio.h>

int main(){
char arr[4][10]={"patna", "delhi","up","pune"};
for(int i=0;i<4;i++){
    printf("%s\n",arr[i]);
}
    return 0;
}