/*
Question:
Write a Program to read n elements in array and display them in reverse order.
*/


#include <stdio.h>
#include <stdlib.h>

int main()  
{  
    int n, arr[100], i;

    printf("Enter the size of the array (1-100): ");  
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size. \n");
        exit(0);
        }

    
    printf("Enter the elements: ");  
    for (i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }   

    printf("The Reversed array: ");  // i = 8 -1   = 7
    for (i = n - 1; i >= 0; i--)  
    {  
        printf("%d ", arr[i]);  
    }  

    printf("\n"); 
    return 0;
}  

/*
Output
Enter the size of the array (1-100): 6
Enter the elements: 12
45
67
23
87
34

The Reversed array: 34 87 23 67 45 12 
*/