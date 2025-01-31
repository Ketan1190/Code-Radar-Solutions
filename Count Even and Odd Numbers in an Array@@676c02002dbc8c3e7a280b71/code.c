#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        scanf("&d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e++;
        }
        if(arr[i]%2!=0){
            o++;
        }
    }
    printf("%d %d ",e,o);
}
