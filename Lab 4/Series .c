/*
Question:
Write a program to sum of Series.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n,sum1=0 , multi = 0 , j;
    printf("Enter  n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        sum1 = sum1 + i*(3*i+1);
        multi = (3*i+1);
        printf(" %dx%d  \t",i, multi);

    }
    printf("\n Sum of series: %d\n", sum1);
    return 0;
}
