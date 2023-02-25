// 6. Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>
int isalphanumeric(char*);

int isalphanumeric(char str[]){
    int a=0,d=0;
for(int i=0;str[i];i++){
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ){
        a++;
    }
    if(str[i]>='0' && str[i]<='9'){
        d++;
    }
}
if(a>0 && d>0){
    return 1;
}

return -1;
}

int main(){
char str[]="hell1";
printf("%d",isalphanumeric(str));
    return 0;
}