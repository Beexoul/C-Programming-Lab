/*
Question:
WAP to check whether the given number is present in an array or not and if present find
its position.
*/

#include <stdio.h>

int main() {
    int n, i, arr[100], search,yesfoundit=0;

    printf("Enter the size of the array (1-100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Number %d found at position %d.\n", search, i + 1); // array 0 bata start hunxa and position of array chat 1 bata start hunxa so array address + 1 is the real position 
            yesfoundit=1;
        }
    }
        if(yesfoundit!=1){ // when there is no any matching array yesfoundit = 0 which make the condition true 0!=1 but when array is found 1!=1 is false 
            printf("Number %d is not present in the array.\n", search);
        }

    return 0;
}


/*
Enter the size of the array (1-100): 5
Enter the elements of the array:
3
4
5
6
7
Enter the number to search: 3
Number 3 found at position 1.

and 

Enter the size of the array (1-100): 4
Enter the elements of the array:
5
6
7
8
Enter the number to search: 9
Number 9 is not present in the array.

*/