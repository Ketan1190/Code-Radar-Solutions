#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==n){
            printf("%d",i);
        }
        else{
            printf("%d ",i)
        }
        
    }
}