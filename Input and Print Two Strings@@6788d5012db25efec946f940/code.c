#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%[^\n]",&str);
    char ans[100];
    printf("You entered: ");
    int i=0;
    while(i<lenof(str)){
        if(str[i]==" "){
            puts(ans);
            ans="";
            i++;
        }
        else{
            ans[i]=str[i];
            i++;
        }
    }
    printf(" and ");
    puts(str);
}