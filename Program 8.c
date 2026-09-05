 // Write a code for Using char to Store and Print a Character

 #include <stdio.h>

int main()
{
    char grade = 'A';

    printf("My grade is %c", grade);

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

4. char grade = 'A';

This creates a variable called grade.

char is used to store a single character.

'A' is the character stored in the variable.

Notice that a character is written inside single quotes:

'A'

For example:

char letter = 'B';
char symbol = '#';
char digit = '5';
5. printf("My grade is %c", grade);

printf() displays information on the screen.

%c is used to display a single character.

The value stored in grade is:

A

Therefore, the output is:

My grade is A
6. return 0;

This tells the computer that the program finished successfully.*/