#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, n = 1;

    while (n == 1) {
        printf("\nMenu for your choice\n");
        printf("1. Find sum of first 100 natural numbers\n");
        printf("2. Convert ASCII code to character\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  

        switch (choice) {
            case 1: {
                int i, sum = 0;
                printf("The first 100 natural numbers are:\n");
                for (i = 1; i <= 100; i++) {
                    printf("%d ", i);
                    sum += i;
                }
                printf("\nThe sum of the first 100 natural numbers is: %d\n", sum);
                break;
            }
            case 2: {
                int asciiCode;
                printf("Enter an ASCII code (0-255): ");
                scanf("%d", &asciiCode);
                if (asciiCode >= 0 && asciiCode <= 255) {
                    printf("The character for ASCII code %d is: '%c'\n", asciiCode, asciiCode);
                } else {
                    printf("Invalid input! Please enter a value between 0 and 255.\n");
                }
                break;
            }
            case 3:
                printf("Exiting the program. Goodbye!\n");
                exit(0);  
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

        printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &n);
    }

    return 0;
}
