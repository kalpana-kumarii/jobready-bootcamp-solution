// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)


#include<stdio.h>
int check(int);
 int check(int a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
   
  }
int main(){
int r=3;
 printf("%d",check(r));
return 0;

}