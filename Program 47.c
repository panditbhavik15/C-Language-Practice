// Write a program to join two strings without using strcat()

#include <stdio.h>

int main()
{
    char first[200], second[100];
    int i = 0, j = 0;

    printf("Enter first string : ");
    if (fgets(first, sizeof(first), stdin) == NULL)
        return 1;

    printf("Enter second string: ");
    if (fgets(second, sizeof(second), stdin) == NULL)
        return 1;

    /* Move i to the end of the first string, ignoring the newline fgets keeps. */
    while (first[i] != '\0' && first[i] != '\n')
        i++;

    /* Copy the second string character by character. */
    while (second[j] != '\0' && second[j] != '\n')
    {
        first[i] = second[j];
        i++;
        j++;
    }

    first[i] = '\0';   /* a C string must end with a null character */

    printf("\nJoined string: %s\n", first);

    return 0;
}

/*
Explanation

1. What strcat() does internally

Find the end of the destination string, copy the source over it,
then write a '\0' at the new end. This program does that by hand.

2. first[i] != '\0'

The first loop walks until it meets the null terminator.
The extra check for '\n' removes the newline that fgets() leaves behind.

3. Copying

first[i] = second[j];

i keeps moving along the destination, j along the source.

4. first[i] = '\0';

Without the null terminator, printf("%s") would keep reading past the end of
the string into unrelated memory. This line is mandatory.

5. Buffer size

first is 200 bytes and second only 100.
The destination must always be large enough to hold both strings plus '\0'.

Complete Output

Enter first string : Hello
Enter second string: World
Joined string: HelloWorld
*/
