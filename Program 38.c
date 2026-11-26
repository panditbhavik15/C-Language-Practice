// Write a program to check whether a number is a palindrome

#include <stdio.h>

int main()
{
    long long num, original, reversed = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    original = num;

    while (num > 0)
    {
        digit = (int)(num % 10);
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        printf("%lld is a palindrome.\n", original);
    else
        printf("%lld is not a palindrome.\n", original);

    return 0;
}

/*
Explanation

1. A palindrome number reads the same forwards and backwards.

    121     -> palindrome
    4554    -> palindrome
    1234    -> not a palindrome

2. Reversing the number

The same technique as Program 37:
pick the last digit, push it onto reversed, then drop it.

3. Comparing

original keeps the value the user typed, because the while loop destroys num.
Finally we compare original with reversed.

4. Why compare numbers and not strings

Both ways work. Working with digits avoids text conversion and shows how
the same logic from Program 29 can be reused on integers.

Complete Output

Enter a number: 1221
1221 is a palindrome.

Enter a number: 1234
1234 is not a palindrome.
*/
