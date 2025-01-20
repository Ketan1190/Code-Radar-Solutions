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
        printf("Vowel");
    }
    else if((p>=97 && p<=124) &&(p!='a' || p!='e' || p!='i' || p!='o' || p!='u')){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    
}