// Write a program to sort an array using bubble sort

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Please enter a size between 1 and 100.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

/*
Explanation

1. How bubble sort works

Compare each pair of neighbours. If they are in the wrong order, swap them.
After one full pass the biggest value has "bubbled" to the end.

2. for (i = 0; i < n - 1; i++)

The outer loop counts the passes.
n elements need at most n - 1 passes to be sorted.

3. for (j = 0; j < n - 1 - i; j++)

The inner loop does the comparisons.
The - i part matters: after pass i the last i elements are already in place,
so there is no need to look at them again.

4. Swapping

Three statements with a temporary variable, the same swap used in
Program 27 and Program 30.

5. Complexity

Bubble sort is O(n^2), which is slow for large arrays.
It is still taught first because the logic is easy to follow.

Complete Output

How many elements? 5
Element 1: 5
Element 2: 1
Element 3: 4
Element 4: 2
Element 5: 8
Sorted array: 1 2 4 5 8
*/
