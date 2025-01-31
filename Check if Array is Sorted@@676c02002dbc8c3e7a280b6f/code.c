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

    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int yes=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
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