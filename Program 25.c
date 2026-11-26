// Write a program to check whether a number is prime using a function

#include <stdio.h>

/* Returns 1 when the number is prime, otherwise 0. */
int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    /* We only need to test up to the square root of n. */
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0; /* found a divisor, so it is not prime */
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

/*
Explanation

1. A prime number is greater than 1 and has only two factors: 1 and itself.

Examples: 2, 3, 5, 7, 11, 13 ...

2. int isPrime(int n)

The function takes one integer and returns an int (1 = true, 0 = false).
Splitting the logic into a function keeps main() short and readable.

3. if (n < 2) return 0;

0 and 1 are not prime, and negative numbers are not prime either.

4. for (i = 2; i * i <= n; i++)

We test divisors starting from 2.
Testing up to n / 2 works, but testing up to the square root is much faster.
Writing i * i <= n avoids using the sqrt() function.

5. if (n % i == 0) return 0;

If any number divides n exactly, then n is not prime.

Complete Output

Enter a number: 17
17 is a prime number.

Enter a number: 18
18 is not a prime number.
*/
