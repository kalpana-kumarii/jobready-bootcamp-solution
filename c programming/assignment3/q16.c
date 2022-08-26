// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main(){
char a;
printf("enter character");
scanf("%c",&a);
if(a>='A'&& a<='Z'){
    printf("Uppercase Albhabet ");
}
if(a>='a' && a<='z'){
  printf("Lowercase Albhabet ");
}
if(a>='0' && a<='9'){
    printf("digit");
}
// 32–47 / 58–64 / 91–96 / 123–126
if((a>=32 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=126)){
    printf("Special character");
}

    return 0;
}