// 7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main(){
int n,m,i,j,k=0,temp;
printf("Enter two Number ");
scanf("%d%d",&n,&m);

//If 2nd number is less than first  number
if(n>m){
temp=n;
n=m;
m=temp;
}

printf("Prime number between %d and %d is\n",n,m);
for(i=n;i<=m;i++){

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
