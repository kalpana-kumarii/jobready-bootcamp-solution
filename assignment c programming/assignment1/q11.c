#include<stdio.h>
int main(){
    int h, m;
    // char c;
    printf("Enter time as \"HH:MM\": ");
    // scanf("%d %c %d",&h,&c, &m);
    scanf("%d:%d",&h, &m);
    printf("%d  hour and %d Minute ",h,m);
    return 0;
}