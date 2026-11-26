// Write a program to store numbers using dynamic memory allocation with malloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int *arr;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    /* Ask the system for exactly n ints of memory at run time. */
    arr = (int *)malloc((size_t)n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nSum     = %d\n", sum);
    printf("Average = %.2f\n", (double)sum / n);

    free(arr);
    arr = NULL;

    return 0;
}

/*
Explanation

1. Why malloc()?

int arr[100]; reserves space for 100 numbers even if you need 3.
malloc() allocates exactly what is needed, at run time, on the heap.

2. (int *)malloc(n * sizeof(int))

sizeof(int) is the number of bytes one int needs.
Multiplying gives the total bytes for n ints.
The (int *) cast turns the returned void pointer into an int pointer.

3. Always check for NULL

If the system is out of memory malloc() returns NULL.
Using a NULL pointer would crash the program, so we check first.

4. free(arr);

Heap memory is not released automatically.
free() gives it back; forgetting this is called a memory leak.

5. arr = NULL;

A small habit that prevents accidentally using a freed pointer later.

6. (double)sum / n

sum and n are both ints, so integer division would drop the decimals.
Casting to double first keeps them.

Complete Output

How many numbers? 4
Number 1: 10
Number 2: 20
Number 3: 30
Number 4: 40

Sum     = 100
Average = 25.00
*/
