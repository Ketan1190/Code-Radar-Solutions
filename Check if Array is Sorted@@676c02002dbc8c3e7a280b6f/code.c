#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n==1 || n==0){
        printf("Sorted");
    }
    int num;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        arr[i]=num;
    }
    int yes=1;
    for(int j=1;;j<n;j++){
        if(arr[j]>arr[j-1]){
            yes=0;
            break;
        }

    }
    if(yes){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}