#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n==1 || n==0){
        printf("Sorted\n");
        return 0;
    }
    int num;
    if(n<=0){
        return 0;

    }
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        arr[i]=num;
    }
    int yes=1;
    for(int j=1;;j<n;j++){
        if(arr[j]<arr[j-1]){
            yes=0;
            break;
        }

    }
    if(yes){
        printf("Sorted\n");
    }
    else{
        printf("Not Sorted");
    }
}