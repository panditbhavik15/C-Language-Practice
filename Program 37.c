// Write a program to reverse a number

#include <stdio.h>

int main()
{
    long long num, original, reversed = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%lld", &num);

    original = num;

    if (num < 0)
        num = -num;

    while (num > 0)
    {
        digit = (int)(num % 10);          /* last digit */
        reversed = reversed * 10 + digit;
        num = num / 10;                   /* drop the last digit */
    }

    if (original < 0)
        reversed = -reversed;

    printf("Reverse of %lld = %lld\n", original, reversed);

    return 0;
}

/*
Explanation

1. reversed = reversed * 10 + digit;

This is the key line.
Multiplying by 10 shifts the existing digits one place to the left,
then adding the new digit puts it in the units place.

For 123:

    round 1 -> digit 3, reversed = 0 * 10 + 3     = 3
    round 2 -> digit 2, reversed = 3 * 10 + 2     = 32
    round 3 -> digit 1, reversed = 32 * 10 + 1    = 321

2. Why long long

The reversed value is built up to the same size as the input,
and large inputs overflow a normal int. 1000000000 reversed is 1,
but 1234567890123 needs more than 32 bits.

3. Negative numbers

The sign is removed first, the digits are reversed, and then the sign is
put back. Otherwise -12 would reverse to -21 through a greedy remainder.

4. %lld

The format specifier for long long.

Complete Output

Enter a number: 1234
Reverse of 1234 = 4321
*/
