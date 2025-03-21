#include <stdio.h>

void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int end=n-1;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            swap(arr,j,end);
            end--;
        }
    }
    for(int k=0;k<n;k++){
        printf("%d",arr[k]);
    }
}