// 6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
// void palindromeString(char *str,int size){
// for(int i=0;i<3;i++){
//     int n=strlen(&str[i]);
// for(int j=0;j<n;j++){
// if(str[i][j]!=str[i][n-1-j]){

// }
// }
// }
// }
int main(){
char str[3][20]= {"abcba", "hhfddf","racecar"};
for(int i=0;i<3;i++){
    int n=strlen(str[i]);
    bool flag=1;
    for(int j=0;j<n;j++){
        if(str[i][j]!=str[i][n-1-j]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("%s\n",str[i]);
    }
}
    return 0;
}