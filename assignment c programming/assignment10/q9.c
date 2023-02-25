// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)
int check(int,int);
int check(int a,int b){
int i,rem;
while(a!=0){
rem=a%10;
if(rem==b){
    return 1;
}
a=a/10;
}
return 0;
}
#include<stdio.h>
int main(){
int n=380, m=1;
int k=check(n,m);
printf("%d",k);

    return 0;
}