#include<stdio.h>
int main(){
    // char a;
    // printf("enter a number");
    // scanf("%c", &a);
    // printf("%c", a);
    int d, m, y;
    char fs, ss;
    // char dash= 45;
    printf("Enter date as: \"DD/MM/YYYY\" ");
    scanf("%d %c %d %c %d",&d,&fs,&m,&ss,&y);
    // printf("Day %c %d , Month %c %d , Year %c %d ",dash,d,dash,m,dash,y);
    printf("Day - %d , Month - %d , Year - %d ",d,m,y);

    return 0;
}