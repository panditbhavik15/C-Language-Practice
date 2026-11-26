// Write a program to find the sum of the digits of a number using a while loop

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Work with the positive value so negative input also works. */
    if (num < 0)
        num = -num;

    while (num > 0)
    {
        digit = num % 10;   /* pick the last digit */
        sum = sum + digit;  /* add it to the total */
        num = num / 10;     /* remove the last digit */
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

/*
Explanation

1. int num, digit, sum = 0;

num   -> the number entered by the user
digit -> the last digit picked in each round
sum   -> the running total (must start at 0)

2. while (num > 0)

The loop keeps running until the number becomes 0.

3. digit = num % 10;

The % operator gives the remainder, so it extracts the last digit.

1234 % 10 = 4

4. sum = sum + digit;

Adds that digit to the running total.

5. num = num / 10;

Integer division drops the last digit.

1234 / 10 = 123

Steps for 1234:

    round 1 -> digit 4, sum 4,  num 123
    round 2 -> digit 3, sum 7,  num 12
    round 3 -> digit 2, sum 9,  num 1
    round 4 -> digit 1, sum 10, num 0   (loop ends)

Complete Output

Enter a number: 1234
Sum of digits = 10
*/
