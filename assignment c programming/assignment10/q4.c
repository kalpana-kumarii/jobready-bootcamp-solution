// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void firstn(int);
 void firstn(int m){
    int i;
    for(i=1;i<=m;i++){
        printf("%d ",i);
    }
 }
int main(){
int n=10;
firstn(n);
return 0;

}