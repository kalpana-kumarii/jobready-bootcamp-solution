// 8. Given a list of words followed by two words, the task is to find the minimum distance 
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 2 )
#include<stdio.h>
#include<string.h>
int main(){
char s[]={"the", "quick" , "brown", "fox","quickk"};
char word1[]="quick";
char word2[]="fox";
int st=0,end=0;
for(int i=0;i<5;i++){
    if(strcmp(word1 , s[i])){
        st=i;
    }
    if(strcmp(word2 , s[i])){
        end=i;
    }
    
}
printf("%d" ,end-st);
   return 0;
}
