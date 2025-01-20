#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    int p=(int)(c);
    if(p>=65 && p<=90){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}