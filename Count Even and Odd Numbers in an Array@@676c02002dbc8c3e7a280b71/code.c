#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int even = 0, odd = 0;
    
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Count even and odd numbers
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("%d %d", even, odd);
    return 0;
}