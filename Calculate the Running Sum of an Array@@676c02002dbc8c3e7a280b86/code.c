#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;

    for(int j=0;j<n;j++){
        sum+=arr[j];
        printf("%d ",sum);

    }
}