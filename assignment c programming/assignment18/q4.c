// 4. Write a function to transform string into uppercase
#include<stdio.h>
char* uppercase(char*);

char* uppercase(char str[]){
for(int i=0;str[i];i++){
       if(str[i]>='a'&& str[i]<='z')
        str[i]=str[i]-32;
}
return str;
}
int main(){
char str[]="heLlo";

printf("%s\n",str);
printf("%s\n",uppercase(str));
    return 0;
}