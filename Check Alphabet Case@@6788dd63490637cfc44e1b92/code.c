#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    int p=(int)(c);
    if(p>=97 && p<=124){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
}