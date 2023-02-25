// 5. Suppose we have a list of email addresses, check whether all email addresses have 
// ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main(){
    char email[3][20]={"abc@gmail.com", "ajdjjgmail.com", "kp@gmail.com"};
    for(int i=0;i<3;i++){
        int c=0;
        for(int j=0;email[i][j];j++){
            if(email[i][j]=='@'){
                c=1;
                break;
            }
        }
        if(c==0){
            printf("%s",email[i]);
        }
    }

    return 0;
}