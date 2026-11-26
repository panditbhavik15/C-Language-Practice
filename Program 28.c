// Write a program to find the length of a string and count its vowels and consonants
// without using strlen()

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, length = 0, vowels = 0, consonants = 0;

    printf("Enter a sentence: ");

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    /* Count characters until the null terminator '\0'. */
    while (str[length] != '\0')
        length++;

    /* fgets keeps the newline at the end, so remove it. */
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length; i++)
    {
        char ch = (char)tolower((unsigned char)str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nLength     = %d\n", length);
    printf("Vowels     = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}

/*
Explanation

1. fgets(str, sizeof(str), stdin)

Reads a full line, including spaces, which scanf("%s") cannot do.
It also cannot overflow the array because the size is limited to 200.

2. '\0'

Every string in C ends with a null character.
That is how the program knows where the text stops.

3. while (str[length] != '\0') length++;

Counts characters one by one without calling strlen().
This shows how strlen() works internally.

4. tolower()

These come from <ctype.h>.
tolower() makes 'A' and 'a' count the same, so we compare only lowercase letters.

5. Only a to z are counted

Digits, spaces and punctuation are skipped, so they are neither vowels nor consonants.

Complete Output

Enter a sentence: C Language Practice

Length     = 19
Vowels     = 7
Consonants = 10
*/
