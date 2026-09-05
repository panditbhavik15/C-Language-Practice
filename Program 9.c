// Write code for  Taking a Character as Input Using scanf() in C Language 

#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a character: ");
    scanf(" %c", &letter);

    printf("You entered: %c", letter);

    return 0;
}

/*
Explanation
1. #include <stdio.h>

This includes the standard input/output library.

It gives us functions such as:

printf() → display something on the screen

scanf() → take input from the user

2. int main()

main() is the starting point of a C program.

When you run the program, execution starts from main().

int means the function will return an integer value.

3. { }

The curly brackets define the body of the main() function.

Everything inside { } belongs to main().

4. char letter;

This creates a variable called letter.

char is used to store a single character.

For example:

char letter;

It can store:

A
B
x
#
5
5. printf("Enter a character: ");

This asks the user to enter a character.

Output:

Enter a character:
6. scanf(" %c", &letter);

scanf() is used to take input from the user.

%c is used to take a single character.

&letter tells C where to store the entered character.

There is a space before %c:

scanf(" %c", &letter);

This helps C ignore a leftover newline or whitespace from previous input.

For example, if the user enters:

A

then:

letter = 'A'
7. printf("You entered: %c", letter);

This displays the character stored in letter.

%c is used to display a character.

Output:

You entered: A
8. return 0;

This tells the computer that the program finished successfully.

Complete Output

If the user enters A:

Enter a character: A
You entered: A . */