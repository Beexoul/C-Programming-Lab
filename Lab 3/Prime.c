#include <stdio.h>
int main() {
    int n, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (n > 1 && is_prime) {
        printf("The number is prime.");
    } else {
        printf("The number is not prime.");
    }
    return 0;
}
