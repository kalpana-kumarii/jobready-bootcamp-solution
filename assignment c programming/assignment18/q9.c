// 9. Write a function to reverse a string word wise. (For example if the given string is 
// “Mysirg Education Services” then the resulting string should be “Services Education 
// Mysirg” )

#include<stdio.h>
#include<string.h>
void swap(char str[],int i,int j){
    char temp;
    while(i<=j){
         temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main(){
char str[] = " Mysirg Education Services ";
int i=0;
int end=0;
int start=0;
int flag=0;
while(str[i]!='\0'){
while (str[i]!=' ')
{
    if(str[i]=='\0'){
        flag=1;
        break;
    }
    end++;
    i++;
   
}
swap(str,start,end-1);
if(flag==1){
    break;
}
start=end++;
i++;



}

swap(str,0,i-1);
printf("%s",str);
    return 0;
}