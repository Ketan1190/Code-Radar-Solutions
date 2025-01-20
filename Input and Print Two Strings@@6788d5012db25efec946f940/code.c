#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%[^\n]",&str);
    char ans[100];
    printf("You entered: ");
    int i=0;
    while(strlen(str)){
        char* j=str;
        if(*str[i]==" "){
            puts(ans);
            ans[0]='\0';
            
        }
        else{
            ans[i]=str[i];
            
        }
        i++;
    }
    printf(" and ");
    puts(str);
}