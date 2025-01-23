#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf("");
        }
        for(int j;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
}