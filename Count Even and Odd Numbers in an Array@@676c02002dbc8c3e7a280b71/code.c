#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        scanf("d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("%d %d ",e,o);
}
