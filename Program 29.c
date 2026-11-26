// Write a program to check whether a string is a palindrome

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, j, isPalindrome = 1;

    printf("Enter a word: ");
    scanf("%199s", str);

    /* Compare the first character with the last, then move inwards. */
    for (i = 0, j = (int)strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);

    return 0;
}

/*
Explanation

1. A palindrome reads the same forwards and backwards.

    madam  -> palindrome
    level  -> palindrome
    hello  -> not a palindrome

2. i = 0, j = strlen(str) - 1

i starts at the first character, j starts at the last one.

3. i < j

We stop when the two indexes meet in the middle.
If we kept going we would compare the same pairs twice.

4. str[i] != str[j]

The moment two mirrored characters differ, the word is not a palindrome,
so we set the flag to 0 and break out of the loop early.

5. scanf("%199s", str)

199 limits the input to 199 characters so the 200 byte array cannot overflow.

Complete Output

Enter a word: madam
"madam" is a palindrome.

Enter a word: hello
"hello" is not a palindrome.
*/
