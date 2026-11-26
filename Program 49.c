// Write a program to demonstrate bitwise operators

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");

    if (scanf("%d %d", &a, &b) != 2)
        return 1;

    printf("\na = %d, b = %d\n\n", a, b);

    printf("a & b   (AND)         = %d\n", a & b);
    printf("a | b   (OR)          = %d\n", a | b);
    printf("a ^ b   (XOR)         = %d\n", a ^ b);
    printf("~a      (NOT)         = %d\n", ~a);
    printf("a << 1  (left shift)  = %d\n", a << 1);
    printf("a >> 1  (right shift) = %d\n", a >> 1);
    printf("b << 1  (left shift)  = %d\n", b << 1);

    return 0;
}

/*
Explanation

1. Bitwise operators work on individual bits, not on the whole number.

    5  = 0101
    3  = 0011

2. a & b (AND)

A bit is 1 only when both numbers have 1 in that position.

    0101
    0011
    ---- &
    0001  = 1

3. a | b (OR)

A bit is 1 when at least one number has 1 there.

    0101 | 0011 = 0111 = 7

4. a ^ b (XOR)

A bit is 1 when the two bits are different.

    0101 ^ 0011 = 0110 = 6

5. ~a (NOT)

Flips every bit, including the sign bit, which is why the result is negative.

6. a << 1 and a >> 1

Shifting left by one multiplies by 2, shifting right by one divides by 2.
5 << 1 = 10 and 5 >> 1 = 2.

Complete Output

Enter two integers: 5 3

a = 5, b = 3

a & b   (AND)         = 1
a | b   (OR)          = 7
a ^ b   (XOR)         = 6
~a      (NOT)         = -6
a << 1  (left shift)  = 10
a >> 1  (right shift) = 2
b << 1  (left shift)  = 6
*/
