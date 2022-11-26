// 3. Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>
int prime(int);
int prime(int a){
        int i=1,res=1;
        for(i=2;i<a;i++){
            if(a%i==0){
            return 0;  
            }
        } 
        return 1;
}
int main(){
printf("%d",prime(9));
    return 0;
}