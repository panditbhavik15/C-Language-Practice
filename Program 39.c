// Write a program to check whether a number is an Armstrong number

#include <stdio.h>

int main()
{
    long long num, original, temp, remainder, sum = 0, digits = 0;
    long long power, i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    original = num;

    /* Step 1: count how many digits the number has. */
    temp = num;
    do
    {
        digits++;
        temp = temp / 10;
    } while (temp > 0);

    /* Step 2: raise every digit to the power of the digit count and add them. */
    temp = num;
    while (temp > 0)
    {
        remainder = temp % 10;

        power = 1;
        for (i = 0; i < digits; i++)
            power = power * remainder;

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("%lld is an Armstrong number.\n", original);
    else
        printf("%lld is not an Armstrong number.\n", original);

    return 0;
}

/*
Explanation

1. What is an Armstrong number?

A number equals the sum of its digits, each raised to the power of the
number of digits.

    153  has 3 digits:  1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153  -> Armstrong
    1634 has 4 digits:  1^4 + 6^4 + 3^4 + 4^4 = 1634          -> Armstrong

2. Counting digits

The do-while loop keeps dividing by 10 until nothing is left.
It is a do-while because 0 still has one digit.

3. The inner for loop

C has no ** operator for integers, so the power is built with repeated
multiplication: 5^3 becomes 5 * 5 * 5.

4. sum == original

original is saved before the multiplication steps because both loops
destroy the value stored in num / temp.

Complete Output

Enter a number: 153
153 is an Armstrong number.

Enter a number: 100
100 is not an Armstrong number.
*/
