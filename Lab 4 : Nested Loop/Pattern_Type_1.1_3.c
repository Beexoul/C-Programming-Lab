/*
Question:
WAP to print the following pattern 
1       2       3       4       5 
2       4       6       8       10 
3       6       9       12      15 
4       8       12      16      20 
5       10      15      20      25 
*/
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            printf("%d \t", i * j);
        }
        printf("\n");
    }
    return 0;
}
