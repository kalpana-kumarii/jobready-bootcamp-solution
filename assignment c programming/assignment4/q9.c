// 9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main(){
  //method 1
int i;
for(i=1;i<=10;i++){
    printf("%d ",i*i*i);
}

//method 2
//  int i = 0, x = 1,cube;
//     while (1)
//     {
//        if(x<=10){
//          cube=i*i*i;
//          printf("%d ",cube);
//          x++;
//        }
//        else{
//          break;
//        }
//        i++;
//     }
    return 0;
}