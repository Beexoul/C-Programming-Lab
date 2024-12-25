/*
Question:
WAP to read n numbers in an array and find the sum of even numbers and odd numbers
and count them also.
Now,

• Sum of all numbers
• Find the sum of odd numbers only
• Find the sum of even numbers only

*/

#include <stdio.h>
#include <stdlib.h>

int main()  
{  
    int n, arr[100], i, sum=0,sum_even=0,count_even=0,sum_odd=0,count_odd=0;

    printf("Enter the size of the array (1-100): ");  
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size. \n");
        exit(0);
            }

    
    printf("Enter the elements: \n");  
    for (i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }   

    for (i = 0; i < n; i++)  
    {  
        sum = sum + arr[i];

        if (arr[i] % 2 == 0) {
            sum_even += arr[i]; 
            count_even++;       
        } else {
            sum_odd += arr[i]; 
            count_odd++;       
        }
    } 

    printf("Sum of all value of array: %d\n", sum);
    printf("Sum of all even value of array: %d\n", sum_even);
    printf("Sum of all odd value of array: %d\n", sum_odd);
    printf("Count of all even array : %d\n", count_even);
    printf("Count of all odd array: %d\n", count_odd);
    printf("\n"); 
    return 0;
}  

/*
Enter the size of the array (1-100): 4
Enter the elements: 
56
34
23
4
Sum of all value of array: 117
Sum of all even value of array: 94
Sum of all odd value of array: 23
Count of all even array : 3
Count of all odd array: 1
*/