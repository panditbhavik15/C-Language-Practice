// Write a program to find the largest and smallest element of an array

#include <stdio.h>

int main()
{
    int arr[100], n, i, largest, smallest;

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

    /* Start with the first element and compare the rest against it. */
    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("\nLargest  = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}

/*
Explanation

1. int arr[100];

An array stores many values of the same type under one name.
arr[0] is the first element, arr[1] the second, and so on.
Indexing always starts at 0, not 1.

2. The input loop

for (i = 0; i < n; i++)

Runs n times and stores each value at position i.

3. largest = arr[0]; smallest = arr[0];

The first element is the best guess so far for both.

4. Comparing the rest

Start the loop at i = 1, because index 0 is already the starting guess.
Every time a bigger value appears, it becomes the new largest.
Every time a smaller value appears, it becomes the new smallest.

Complete Output

How many elements? 5
Element 1: 12
Element 2: 4
Element 3: 99
Element 4: 7
Element 5: 45

Largest  = 99
Smallest = 4
*/
