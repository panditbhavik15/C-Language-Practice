// Write a program to count the number of words in a sentence

#include <stdio.h>

int main()
{
    char str[500];
    int i, words = 0, inWord = 0;

    printf("Enter a sentence: ");

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            /* A separator ends the current word. */
            inWord = 0;
        }
        else if (inWord == 0)
        {
            /* We just moved from a separator into a word. */
            inWord = 1;
            words++;
        }
    }

    printf("Word count = %d\n", words);

    return 0;
}

/*
Explanation

1. The idea

Count a word only when we move from whitespace into a real character.
That way two spaces in a row do not count as two words.

2. inWord

A flag that remembers whether we are currently inside a word.
It starts at 0 because the sentence has not started yet.

3. The two branches

    separator  -> inWord = 0
    not separator and inWord == 0  -> we entered a new word, words++

4. Why not strtok()?

strtok() modifies the string and is trickier for beginners.
This manual loop shows the actual logic, which is what practicals test.

5. fgets()

Reads the whole line including spaces.
As always it may keep the '\n' at the end, so '\n' is treated as a separator.

Complete Output

Enter a sentence: C   language practice is fun
Word count = 5
*/
