#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>=i;j--){
            printf("%c ",j+65);
        }
        printf("\n");
    }
}