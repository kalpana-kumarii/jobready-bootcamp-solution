// 5. Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include<stdio.h>
int findfibo(int);
int main(){
    int n=13;
    
    printf("%d",findfibo(n));
}

int findfibo(int k){
int a,b,c,i;
a=-1;
b=1;
// c=a+b;
// a=b;
// b=c;
for(i=1;i<=k;i++){
c=a+b;
if(k==c){
    return 1;
}
a=b;
b=c;
// printf("%d",c);
}
return 0;

}
