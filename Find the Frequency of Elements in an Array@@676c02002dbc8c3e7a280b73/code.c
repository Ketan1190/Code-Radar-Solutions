#include <stdio.h>
int main() {
    int hash[1000] = {0}; // Initialize hash array to 0 for all indices
    int n;

    // Input the number of elements
    scanf("%d", &n);
    int num;

    // Read each number and increment its frequency in the hash array
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        hash[num]++;
    }

    // Output the numbers and their frequencies in descending order
    for (int k = 999; k >= 0; k--) {
        if (hash[k] != 0) { // Check if the frequency is non-zero
            printf("%d %d\n", k, hash[k]);
        }
    }

    return 0;
}
