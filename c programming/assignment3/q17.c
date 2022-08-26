// 17. Write a program which takes the length of
// the sides of a triangle as an input. Display
// whether the triangle is valid or not.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides");
    scanf("%d%d%d", &a, &b, &c);
    if(a>0 && b>0 && c>0)
    {
        if((a+b)>c || (a+c)>b || (b+c)>a){
        printf("Triangle");
    }
    else{
        printf("Not a valid triangle");
    }
    }
    else{
         printf("Not a valid triangle");
    }
    return 0;
}