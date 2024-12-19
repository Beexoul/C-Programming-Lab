#include <stdio.h>
int main() {
    int n, original, reverse = 0;  
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {    // Loop that run until the 
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (original == reverse) {
        printf("The number is a palindrome.");
    } else {
        printf("The number is not a palindrome.");
    }
    return 0;
}
