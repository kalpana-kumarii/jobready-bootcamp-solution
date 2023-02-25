// 9. Write a program to check whether a given number is an Armstrong number
// or not
#include<stdio.h>
int main(){
int n,count,temp,rem,rem1,i,check=0;
printf("Enter number");
scanf("%d",&n);
temp=n;
while(temp!=0){
    count++;
    temp=temp/10;

}
//printf("count %d\n",count);
temp=n;
while (n!=0)
{
    rem=n%10;
    rem1=1;
    for(i=1;i<=count;i++){
        
        rem1=rem1*rem;
         // printf("rem= %d  count= %d\n",rem1,i);
       
    }
  check=check+rem1;
    n=n/10;
}

//printf("%d",check);
if(temp==check){
    printf("%d is a armstrong number",temp);
}else{
    printf("%d is not a armstrong number",temp);
}
    return 0;
}