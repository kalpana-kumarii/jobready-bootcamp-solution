#include<stdio.h>
#include<string.h>
char *read_update_name(char *name);
int read_update_percentage(int *percent);
struct student
{
    /* data */
    char* name[20];    
    float percent;
};

char *read_update_name(char *name){
printf("Enter name for updation");
scanf("%s",name);
return name;
}

int read_update_percentage(int *percent){
    
}
int main(){
struct student s1;
printf("Enter name");
scanf("%s",s1.name);
read_update_name(s1.name);
s1.percent=50;
printf("%s",s1.name);
printf("%f",s1.percent);
    
return 0;
}