// 9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main(){
int a[] = {5,7,4,76,5};

for(int i=4;i>=0;i--){
    printf("%d ",*(a+i));
}
    return 0;
}
