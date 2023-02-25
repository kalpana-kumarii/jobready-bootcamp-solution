// 4. Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>
int main(){
char arr[4][10]={"patna", "delhi","up","pune"};
char a[]="pune";
   int c=strlen(a);  
for(int i=0;i<4;i++){
   if(strlen(arr[i])==strlen(a)){
     for(int j=0;arr[i][j];j++){
        if(arr[i][j]==a[j]){
            c--;
        }
      }
      if(c==0){
        printf("yes");
        break;
      }
   }
}
if(c){
    printf("no");
}
    return 0;
}