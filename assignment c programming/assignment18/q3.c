// 3. Write a function to compare two strings.
#include<stdio.h>
int compareString(char*,char*);
int compareString(char str1[],char str2[]){
for(int i=0;str1[i] ||str2[i];i++){
if(str1[i]!=str2[i]){
    return 0;
}
}
return 1;
}

int main(){

    char str1[]="hello";
    char str2[]="hello";
    printf("%d",compareString(str1,str2));
    return 0;
}