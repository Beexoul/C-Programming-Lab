#include <stdio.h>
#include <math.h>
int main() {
    int n;
    float x, sum = 0, factorial=1;
    printf("Enter x and n : ");
    scanf("%f %d", &x, &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            factorial = factorial * j;
        }
        sum = sum + pow(x, i) / factorial;
    }
    printf("Sum of the series is %.2f\n", sum);
    return 0;
}
