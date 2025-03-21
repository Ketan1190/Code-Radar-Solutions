#include <stdio.h>

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Reading input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start=0;
    for (int j = 0; j <n; j++) {
        if(arr[j]!=0){
            arr[start++]=arr[j];
        }
    }
    while(start<n){
        arr[start++]=0;
    }

   
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
