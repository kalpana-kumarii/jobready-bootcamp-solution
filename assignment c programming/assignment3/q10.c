// 10. Write a program which takes the cost price and 
//selling price of a product from the
// user. Now calculate and print profit or loss percentage.
 #include<stdio.h>
 int main(){

int costp, sellingp, p, per;
printf("enter cost price and selling price number");
// scanf("%d%d ",&costp,&sellingp);
scanf("%d%d",&costp,&sellingp);
 p= sellingp-costp;
 per= (p*100)/costp;

if(sellingp>costp){

    printf("Profit %% = %d %%",per);
}
else if(costp==sellingp){
    printf("No loss No Profit= %d %%",per);
 }
else{
    printf("Loss %% = %d %%",-per);
}
//  printf("p =%d  per= %d",p,per);

    return 0;
 }