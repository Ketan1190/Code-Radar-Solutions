#include <stdio.h>
int main(){
    int hash[1000]={0};
    int n;
    scanf("%d",&n);
    int num;
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        hash[num]++;
        
    }
    for(int k=0;k<1000;k++){
        if(hash[k]!=0){
            printf("%d %d\n",k,hash[k]);
        }
    }
}