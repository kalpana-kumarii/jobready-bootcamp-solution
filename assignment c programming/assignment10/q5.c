// 5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void firstnOdd(int);
 void firstnOdd(int m){
    int i;
    for(i=1;i<=m;i=i+2){
        printf("%d ",i);
    }
 }
int main(){
int n=20;
firstnOdd(n);
return 0;

}