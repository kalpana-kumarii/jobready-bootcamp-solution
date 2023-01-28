// 10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
int main(){
char p[]="hedllo";
int n=strlen(p);
for(int i=0;i<n/2;i++){
    char temp=p[i];
    p[i]=p[n-i-1];
    p[n-i-1]=temp;

}
printf("%s",p);
    return 0;
}