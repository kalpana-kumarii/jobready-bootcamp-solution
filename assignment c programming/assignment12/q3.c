// 3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
int naturalnum(int);
int naturalnum(int k){ 
    if(k<0){
     return 0;
    } 
    if(k%2!=0){
    printf("%d ",k);
    }   
    return naturalnum(k-1);
}
int main(){
int n=10;
naturalnum(n);
    return 0;
}