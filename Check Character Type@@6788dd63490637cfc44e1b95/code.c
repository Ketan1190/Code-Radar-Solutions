#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    int p=(int)c;
    if(p>=48 && p<=57){
        printf("Digit");
    }
    else if(p=='a' || p=='e'|| p=='i' || p== 'o' || p=='u'){
        printf("vowel");
    }
    
}