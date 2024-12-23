#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum = 0;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    for (int i = 0; i <= n; i++) {
        sum = sum + 1 / pow(x, i);
    }
    printf("Sum of series: %.2f\n", sum);
    return 0;
}
