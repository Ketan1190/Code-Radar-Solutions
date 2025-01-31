#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    int[] arr;
    int num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        arr[i]=num;
    }
    int max=-99999;
    int min=100000;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d ",max);
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
}