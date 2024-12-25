/*
Question:
WAP to print the following pattern 
1
1       1
1       1       1
1       1       1       1
1       1       1       1       1
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("1\t");
        }
        printf("\n");
    }
    return 0;
}
