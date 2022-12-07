// 9. Write a C program to sort a string array in ascending order.

#include<stdio.h>
#include<string.h>

int main(){
char str[]="hello";
int n=strlen(str);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(str[i]<=str[j]){
            char temp;
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
}
    printf("%s",str);

    return 0;
}