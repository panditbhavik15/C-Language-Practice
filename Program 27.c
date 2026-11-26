// Write a program to reverse an array in place

#include <stdio.h>

int main()
{
    int arr[100], n, i, temp;

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

    /* Swap the first with the last, the second with the second last, and so on. */
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nReversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

/*
Explanation

1. Why only n / 2 rounds?

In every round we fix two elements, one from the front and one from the back.
When we reach the middle there is nothing left to swap.

For n = 5 we only need 2 rounds (n / 2 = 2), the middle element stays as it is.

2. arr[n - 1 - i]

This mirrors index i to the other end of the array.

    i = 0 -> arr[4]  (last item)
    i = 1 -> arr[3]  (second last item)

3. Swapping with a temporary variable

temp      = arr[i];
arr[i]    = arr[n - 1 - i];
arr[n-1-i] = temp;

The temporary variable is required, otherwise the first value is overwritten.

Complete Output

How many elements? 5
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

Reversed array: 50 40 30 20 10
*/
