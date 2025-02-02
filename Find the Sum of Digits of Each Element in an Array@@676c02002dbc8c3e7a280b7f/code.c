#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int sum=0;
        int mod=1;
        int num=arr[i];
        if (num==0){
            printf("%d ",num);
        }
        while(num>0){
            mod=num%10;
            sum=sum+mod;
            num=num/10;
        }
        printf("%d ",sum);
    }
}