#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int hash[10000]={0};
    int result=-1;

    for(int i=n-1;i>=0;i--){
        if(hash[arr[i]]==1){
            result=arr[i];
        }
        hash[arr[i]]++;
    }

    printf("%d",result);
}