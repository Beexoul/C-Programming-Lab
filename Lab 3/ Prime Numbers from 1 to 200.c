#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    printf("Prime numbers from 1 to 200:\n");
    for (int i = 1; i <= 200; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
