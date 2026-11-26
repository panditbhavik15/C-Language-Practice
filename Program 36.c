// Write a program to check whether a character is a vowel or a consonant using switch

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch, lower;

    printf("Enter an alphabet: ");

    if (scanf(" %c", &ch) != 1)
        return 1;

    lower = (char)tolower((unsigned char)ch);

    if (lower < 'a' || lower > 'z')
    {
        printf("'%c' is not an alphabet.\n", ch);
        return 1;
    }

    switch (lower)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("'%c' is a vowel.\n", ch);
            break;

        default:
            printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}

/*
Explanation

1. tolower()

Makes 'A' and 'a' behave the same, so we only have to test lowercase letters.
The (unsigned char) cast prevents undefined behaviour for non-ASCII input.

2. Stacked case labels without break

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':

All five labels share one block of code.
This is called fall-through, and here it is intentional.

3. Range check

lower < 'a' || lower > 'z' catches digits, symbols and spaces,
so the program does not wrongly call '7' a consonant.

4. scanf(" %c", &ch)

The space before %c skips any leftover newline from earlier input.

Complete Output

Enter an alphabet: A
'A' is a vowel.

Enter an alphabet: z
'z' is a consonant.

Enter an alphabet: 7
'7' is not an alphabet.
*/
