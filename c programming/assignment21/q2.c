// 2. Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]

#include<stdio.h>

struct employee
{
    int id1;
    char name[20];
    int salary;
};

void input(){
//struct employee id, name, salary;
    scanf("%d",&employee.id1);
    scanf("%d",&employee.salary);
    fgets(employee.name,20,stdin);
    printf("%d %d %s",employee.id1,employee.salary,employee.name);
}

int main(){

    return 0;
}