#include <stdio.h>
#include <math.h>
int main() {
    int sum, num, remainder;
    printf("Three-digit Armstrong numbers are:\n");
    for (int i = 100; i <= 999; i++) {
        sum = 0;
        num = i;
        while (num != 0) {
            remainder = num % 10;
            sum += pow(remainder, 3);
            num /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
