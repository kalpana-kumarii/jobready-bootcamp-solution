// 4. Define a function to print Pascal Triangle up to N lines.
#include<stdio.h>
void pascalTriangle(int);
int fact(int);
int main(){
    int n=10 ;
    pascalTriangle(n);
    return 0;
}

// using ncr formula
void pascalTriangle(int n){
int i,j;
for(i=0;i<=n;i++){
int res;
    for(j=0;j<=i;j++){
        res=fact(i)/(fact(j)*fact(i-j));
        printf("%d ",res);
    }
    printf("\n");
}

}
int fact(int k){
    int res=1,i;
    for(i=1;i<=k;i++)
    res=res*i;

    return res;
}