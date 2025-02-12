#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers <= 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // If divisible, not a prime number
        }
    }
    return 1; // Otherwise, it is a prime number
}
