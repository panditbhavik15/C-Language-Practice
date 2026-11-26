// Write a program to print all prime numbers between two numbers

#include <stdio.h>

/* Returns 1 when the number is prime, otherwise 0. */
int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int start, end, i, found = 0;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    /* Allow the user to type the range in either order. */
    if (start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d: ", start, end);

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("none");

    printf("\n");

    return 0;
}

/*
Explanation

1. Reusing the function

isPrime() is the same idea as Program 25.
Putting it in a function means main() only has to loop and print.

2. The range loop

for (i = start; i <= end; i++)

We call isPrime() once for every number in the range.

3. Swapping start and end

If the user types 50 10, swapping makes the loop work anyway.
A temporary variable is needed to swap two values.

4. found

Starts at 0 and becomes 1 as soon as anything is printed.
If it is still 0 at the end, the range had no primes and we say so.

Complete Output

Enter start and end: 10 30
Prime numbers between 10 and 30: 11 13 17 19 23 29
*/
