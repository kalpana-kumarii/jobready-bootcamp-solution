// 1. Write a program to find the number of vowels in each of the 5 strings stored in two 
// dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>
int main(){
    char arr[4][10]= {"patna", "delhi","up","pune"};
    int c=0;
    for(int i=0;i<4;i++){
        for(int j=0;arr[i][j];j++){
            if(arr[i][j]=='a' || arr[i][j]=='e' || arr[i][j]=='i' || arr[i][j]=='o' || arr[i][j]=='u'){
                c++;
            }
        }
    }
    printf("%d" , c);
    return 0;
}