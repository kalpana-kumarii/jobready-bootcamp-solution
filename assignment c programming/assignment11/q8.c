// 8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
void pascalTriangle(int);
int fact(int);
void pascalTriangle(int n){
    int res;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            res= fact(i)/(fact(j)*fact(i-j));
            printf("%d ",res);
        }
        printf("\n");
    }
}

int fact(int k){
   int res =1;
for(int i=1;i<=k;i++){
    res=res*i;
}
return res;
}
int main(){
    pascalTriangle(7);
    return 0;
}