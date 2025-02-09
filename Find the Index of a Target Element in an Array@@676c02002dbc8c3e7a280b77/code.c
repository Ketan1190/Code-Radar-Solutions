#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int hey(int n){
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",hey(n));
    
}