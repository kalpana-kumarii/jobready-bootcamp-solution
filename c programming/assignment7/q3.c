// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
#include<stdio.h>
int main(){
    int a,b,i,n,c,count=0;
    printf("Enter number ");
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==1){
        printf("%d",b);
    }
    else{
    for(i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        if(n==c){
           c=0;
            break;
        }
        else{
            c++;
        }
    }
    if(c==0){
         printf("Yes");
    }
   else{
    printf("No");
   }
    }
    return 0;
}
