// 10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
int main(){
int i,j,n,temp,count=0,rem,rem2=1,check=0;
for(i=1;i<=1000;i++){
temp=i;
count=0;
check=0;
    while (temp!=0)
    {
        count++;
        temp=temp/10;
        //printf("%d ",count);
    }

    temp=i;
   // printf("\n");
    while(temp!=0){
        rem=temp%10;
        rem2=1;
        for(j=1;j<=count;j++){
            rem2=rem2*rem;
        //printf(" %d", rem2);
        }
        check=check+rem2;
        temp=temp/10;
    }
     if(i==check){
        printf("%d ",i);
    }
    //temp=i;
    //for debugging
    // if(i==check){
    //     printf("i= %d  check= %d  temp= %d",i,check,temp);
    // }
    // else{
    //     printf("No i= %d  check= %d  temp= %d",i,check,temp); 
    // }
   
    

}


return 0;
}