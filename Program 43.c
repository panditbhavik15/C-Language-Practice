// Write a program to search for a value in a sorted array using binary search

#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int low, high, mid, found = -1;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Please enter a size between 1 and 100.\n");
        return 1;
    }

    printf("Enter the elements in sorted (ascending) order:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;   /* the value must be on the right */
        }
        else
        {
            high = mid - 1;  /* the value must be on the left */
        }
    }

    if (found >= 0)
        printf("%d found at position %d (index %d).\n", key, found + 1, found);
    else
        printf("%d was not found in the array.\n", key);

    return 0;
}

/*
Explanation

1. Binary search needs a sorted array

Because the data is sorted, we can throw away half of it with one comparison.

2. mid = low + (high - low) / 2;

This finds the middle index.
Writing it this way instead of (low + high) / 2 avoids integer overflow on
very large arrays.

3. The three cases

    arr[mid] == key  -> found it, stop
    arr[mid] <  key  -> search the right half  (low  = mid + 1)
    arr[mid] >  key  -> search the left half   (high = mid - 1)

4. while (low <= high)

When low passes high, the search space is empty and the value is not there.

5. Speed

Each step halves the array, so binary search is O(log n).
For 1,000,000 elements it needs at most about 20 comparisons, while a
linear search could need 1,000,000.

Complete Output

How many elements? 6
Element 1: 2
Element 2: 4
Element 3: 6
Element 4: 8
Element 5: 10
Element 6: 12
Enter the value to search: 8
8 found at position 4 (index 3).
*/
