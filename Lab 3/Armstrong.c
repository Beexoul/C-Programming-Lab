#include <stdio.h>
#include <math.h>
int main() {
    int n, original, sum = 0, digits = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    while (n != 0) {
        remainder = n % 10;
        sum += pow(remainder, digits);
        n /= 10;
    }
    if (sum == original) {
        printf("The number is an Armstrong number.");
    } else {
        printf("The number is not an Armstrong number.");
    }
    return 0;
}
