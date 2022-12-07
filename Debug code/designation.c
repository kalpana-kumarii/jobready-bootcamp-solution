#include <stdio.h>
static const char * const Designation_String[]= {
    [E2F]="E2F"
    };
int main()
{

    enum Designation_String E;
    printf("ENTER CHOICE");
    E = scanf("%c",&E); 
    switch(E)
    {

    case E2F: 
    printf("Software Fresher"); 
    break;

    case E2:
    printf("Software Engineer");
    break; 

    case E3:
    printf("Senior Software Engineer");
    break;

    case E4:
    printf("Team Lead");
    break;
    
}

 return 0;
}