// 5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime(int);
void prime(int n){
for(int i=2;i<=n;i++){
    int c=1;
    for(int j=2;j<i;j++){
        if(i%j==0){
          c=0;
          break;
        }
    }
     if(c==1){
        printf("%d ",i);
        }
}

}
int main(){
prime(40);
    return 0;
}