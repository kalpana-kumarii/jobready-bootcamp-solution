// 7. Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.

#include<stdio.h>
int main(){
char str[]= "abcd34556@3as";
int i,a=0,d=0,s=0;
for(i=0;str[i];i++){
    if((str[i]>='a'&&str[i]<='z')|| (str[i]>='A'&&str[i]<='Z')){
        a++;
    }
    else if(str[i]>='0' &&str[i]<='9'){
        d++;
    }else{
        s++;
    }
}

printf("Alphabets= %d  Digits= %d  Special Characters = %d",a,d,s);
    return 0;
}