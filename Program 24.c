// Write a program to find the factorial of a number using recursion

#include <stdio.h>

/* A recursive function calls itself with a smaller value each time. */
unsigned long long factorial(int n)
{
    if (n <= 1)
        return 1ULL; /* base case: 0! and 1! are both 1 */

    return (unsigned long long)n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a positive number: ");

    if (scanf("%d", &n) != 1 || n < 0)
    {
        printf("Please enter a valid non-negative number.\n");
        return 1;
    }

    printf("Factorial of %d = %llu\n", n, factorial(n));

    return 0;
}

/*
Explanation

1. unsigned long long factorial(int n)

A function that returns a very large positive number.
unsigned long long is used because factorials grow very fast
(20! is already bigger than a normal int can hold).

2. Base case

if (n <= 1)
    return 1ULL;

Every recursive function must have a stopping condition,
otherwise it would call itself forever.

3. Recursive case

return (unsigned long long)n * factorial(n - 1);

factorial(5) -> 5 * factorial(4)
factorial(4) -> 4 * factorial(3)
factorial(3) -> 3 * factorial(2)
factorial(2) -> 2 * factorial(1)
factorial(1) -> 1

Answer: 5 * 4 * 3 * 2 * 1 = 120

4. %llu

The correct format specifier for unsigned long long.

Complete Output

Enter a positive number: 5
Factorial of 5 = 120
*/
