// 10. Write a program in C to find the row with maximum number of 1s
#include<stdio.h>
int main (){
int a[3][3]={{0,1,1},{1,1,1},{0,1,1}};
int next=0;
int index=0;
for(int i=0;i<3;i++){
    int pre=0;
    for(int j=0;j<3;j++){
        if(a[i][j]==1){
            pre++;
        }
    }

    if(pre>next){
        next=pre;
        index=i;
    }
}

printf("Maximum row with maximum 1s is %d",index);
    return 0;
}