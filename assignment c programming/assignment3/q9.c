// 9. Write a program to find the greatest among
// three given numbers. Print number once
// if the greatest number appears two or three times.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter three number");
scanf("%d %d %d",&a,&b,&c);

// if(a>=b && a>=c){
//     printf("%d  is greater ",a);
// }
// else if(b>=a && b>=c){
//     printf("%d  is greater ",b);
// }
// else{
//     printf("%d  is greater ",c);
// }

//Method 2
if(a>b){
    if(a>c){
        printf("%d  is greater ",a);
    }
    else{
        printf("%d  is greater ",c);
    }
}
else{
    if(b>c){
        printf("%d  is greater ",b);
    }
    else{
        printf("%d  is greater ",c);
    }

}


    return 0;
}
