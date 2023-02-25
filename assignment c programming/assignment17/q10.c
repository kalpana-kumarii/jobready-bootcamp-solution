// Write a program in C to Find the Frequency of Characters

#include<stdio.h>
#include<string.h>
int main(){
char arr[]="Kalpana";
int n=strlen(arr);
int i=0;
int frq[150]={0};
while(i<n){
    frq[arr[i++]]++;
}
i=0;
while(i<150){
    if(frq[i]!=0){
        printf("%c -> %d\n",i,frq[i]);
    }
    i++;
}
    return 0;
}