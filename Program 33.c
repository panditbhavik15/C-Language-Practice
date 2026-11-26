// Write a program to print the Fibonacci series up to N terms

#include <stdio.h>

int main()
{
    int n, i;
    long long a = 0, b = 1, next;

    printf("How many terms? ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%lld ", a);
        next = a + b; /* the next term is the sum of the previous two */
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}

/*
Explanation

1. The Fibonacci series starts with 0 and 1.
Every following term is the sum of the two terms before it.

    0, 1, 1, 2, 3, 5, 8, 13, 21, ...

2. long long a = 0, b = 1;

a holds the current term and b holds the next one.
long long is used because the values grow quickly.

3. next = a + b;

Calculates the following term.

4. a = b;
   b = next;

Shifts both variables forward by one step.
The order matters: a must be updated before b, using the saved value in next.

5. %lld

The format specifier for a long long integer.

Complete Output

How many terms? 8
Fibonacci series: 0 1 1 2 3 5 8 13
*/
