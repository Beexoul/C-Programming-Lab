#include <stdio.h>

int main() {
    int n = 1;
    int i,j; 
    for (i = 1; i <= 5; i++) { 
        for (j = 0;  j< i; j++) 
        { 
            printf("%d ", n); 
            n += 10; 
        }
        printf("\n");
    }
        return 0;
}
