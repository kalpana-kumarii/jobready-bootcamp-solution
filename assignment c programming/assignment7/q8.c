// 8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main(){
int n,i,j,k=0;
printf("Enter Number");
scanf("%d",&n);

//Method 1
for(i=n+1;i<n+10;i++){
 for(j=2;j<i;j++){
     if(i%j==0){
        k=0;
        break;
    }
    else{
        k++;
    }   
 }
 if(k>0){
        printf("Next prime number of given number is %d\n" ,i);
        break;
    }
}

//Method 2

// for(i=n+1;;i++){
//  for(j=2;j<i;j++){
//      if(i%j==0){
//         k=0;
//         break;
//     }
//     else{
//         k++;
//     }   
//  }
//  if(k>0){
//         printf("Next prime number of given number is %d\n" ,i);
//         break;
//     }
// }
    return 0;
}