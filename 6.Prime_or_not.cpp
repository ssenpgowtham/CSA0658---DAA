#include <stdio.h>
int isPrime(int n, int i) {
    if (n <= 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else if (n % i == 0) {
        return 0;
    } else if (i * i > n) {
        return 1;
    } else {
        return isPrime(n, i + 1);
    }
}
int isPrime(int n) {
    return isPrime(n, 2);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
