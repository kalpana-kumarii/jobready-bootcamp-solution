// 12. Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main(){
    char a;
    printf("enter character:");
    scanf("%c",&a);

    // if(a>='a'&&a<='z'){
    //     printf("lowercase");
    // }
    //  if(a>='A'&&a<='Z'){
    //     printf("uppercase");
    // }

    if(a>=65&&a<=90){
      printf("uppercase");
    }
    if(a>=97 && a<=122){
           printf("lowercase");
         
    }
    

    return 0;
}