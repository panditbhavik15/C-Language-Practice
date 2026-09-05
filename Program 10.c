// Write a code for Taking a float Decimal Number as Input in C Language

#include <stdio.h>

int main()
{
    float number;

    printf("Enter a decimal number: ");
    scanf("%f", &number);

    printf("You entered: %.2f", number);

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

4. float number;

This creates a variable called number.

float is used to store decimal numbers.

For example:

10.5
25.75
3.14
5. printf("Enter a decimal number: ");

This asks the user to enter a decimal number.

Output:

Enter a decimal number:
6. scanf("%f", &number);

scanf() is used to take input from the user.

%f is used to take a float value.

&number tells C where to store the entered value.

For example, if the user enters:

25.75

then:

number = 25.75
7. printf("You entered: %.2f", number);

This displays the value stored in number.

%f → displays a decimal number.

%.2f → displays 2 digits after the decimal point.

For example:

You entered: 25.75
8. return 0;

This tells the computer that the program finished successfully.

Complete Output
Enter a decimal number: 25.75
You entered: 25.75   . */