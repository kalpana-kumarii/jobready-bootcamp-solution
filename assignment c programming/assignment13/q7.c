// 7. Write a recursive function to calculate HCF of two numbers

#include<stdio.h>
int hcf(int n,int m,int res,int i){
if(n<=1 || m<=1){
    return res;
}
if(n%i==0 && m%i==0){
    res=res*i;
}
return hcf(n%i,m%i,res,i++);  
}
int main(){
    printf("HCF of two numbers is %d",hcf(14,7,1,1));
    return 0;
}