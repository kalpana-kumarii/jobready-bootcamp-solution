// 6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main(){
int n,i,j,k=0;
// printf("Enter Number ");
// scanf("%d",&n);
for(i=2;i<100;i++){

    for(j=2;j<=i;j++){
        if(i==j){
            k++;
            // printf("k=%d\n",k);
        }
        else if(i%j==0){
            k=0;
            break;
        }else{
            k++;
        }
       
    }

    if(k>0){
        printf("%d ",i);
    }

}
    return 0;
}
