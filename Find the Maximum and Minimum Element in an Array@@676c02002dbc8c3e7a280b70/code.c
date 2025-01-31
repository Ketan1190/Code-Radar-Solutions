#include <stdio.h>



int main() {
    int n;
    int[n] arr;
    int num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        arr[i]=num;
    }
    int max=-999;
    int min=1000;
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