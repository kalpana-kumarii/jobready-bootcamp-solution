// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int hcf(int a, int b){
    int i=1,res=1;
    if(a<b){
        for(i=2;i<=a;i++){
            if(a%i==0 && b%i==0){
            return i;  
            }
        } 
    }
    else{
        return 1;
    }

}
int main(){
printf("%d",hcf(4,30));
    return 0;
}