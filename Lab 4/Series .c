#include <stdio.h>
#include <math.h>

int main() {
    int n,sum = 0;
    printf("Enter  n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        sum = sum + i*(3*i+1);
    }
    printf("Sum of series: %d\n", sum);
    return 0;
}
