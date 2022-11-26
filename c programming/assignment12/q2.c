// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
int naturalnum(int);
int naturalnum(int k){
    if(k<1){
     return 0;
    }
    printf("%d ",k);
    return naturalnum(k-1);       

}
int main(){
int n=10;
naturalnum(n);
    return 0;
}