#include <stdio.h>
#include <limits.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int mask=1<<(sizeof(int)* CHAR_BIT - 1);
    if(a&mask){
        printf("Set")
    }
    else{
        printf("Not Set");
    }


}