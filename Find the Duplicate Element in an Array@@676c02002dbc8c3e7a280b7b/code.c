#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int hash[1000]={0};
    for(int j=0;j<n;j++){
        if(hash[arr[j]]!=0){
            printf("%d",arr[j]);
            return 0;
        }
        else{
            hash[arr[j]]=arr[j];
        }
        
    }
}