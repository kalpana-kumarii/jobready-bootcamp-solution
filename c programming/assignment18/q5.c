// 5. Write a function to transform a string into lowercase

#include<stdio.h>
char* lowercase(char*);

char* lowercase(char str[]){
for(int i=0;str[i];i++){
       if(str[i]>='A'&& str[i]<='Z')
        str[i]=str[i]+32;
}
return str;
}
int main(){
char str[]="WORLD";

printf("%s\n",str);
printf("%s\n",lowercase(str));
    return 0;
}