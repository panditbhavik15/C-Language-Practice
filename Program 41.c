// Write a program to find the GCD and LCM of two numbers

#include <stdio.h>

/* Euclid's algorithm: keep replacing (a, b) with (b, a % b). */
int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a, b, g;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Both numbers must be positive.\n");
        return 1;
    }

    g = gcd(a, b);

    printf("GCD of %d and %d = %d\n", a, b, g);
    printf("LCM of %d and %d = %d\n", a, b, (a / g) * b);

    return 0;
}

/*
Explanation

1. GCD (Greatest Common Divisor)

The largest number that divides both values exactly.
GCD(36, 24) = 12

2. Euclid's algorithm

    a = 36, b = 24
    a % b = 12   ->  (a, b) becomes (24, 12)
    24 % 12 = 0  ->  (a, b) becomes (12, 0)
    b is 0, so the answer is 12

It finishes very quickly even for huge numbers.

3. LCM from GCD

LCM(a, b) = (a / b) * b   -- but written as (a / gcd) * b.

Why divide first? Because a * b can overflow an int for large inputs,
while a / gcd is exactly divisible and much smaller.

4. Integer division

a / g is exact by definition of a common divisor, so no precision is lost.

Complete Output

Enter two positive numbers: 36 24
GCD of 36 and 24 = 12
LCM of 36 and 24 = 72
*/
