/*
WAP to read marks of n students and print the marks of top five. 
*/

#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int marks[100];
    
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (marks[i] < marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    
    printf("Top 5 marks:\n");
    for (i = 0; i < (n < 5 ? n : 5); i++) { 
        printf("%d ", marks[i]);
    }
    printf("\n");
    
    return 0;
}
