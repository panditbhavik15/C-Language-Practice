 // Write a code for Modulus % and Finding the Remainder in C Language

 #include <stdio.h>

int main()
{
    int num1, num2, remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    remainder = num1 % num2;

    printf("Remainder = %d", remainder);

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

4. int num1, num2, remainder;

This creates three integer variables.

num1 → stores the first number

num2 → stores the second number

remainder → stores the remainder after division

5. printf("Enter first number: ");

This asks the user to enter the first number.

6. scanf("%d", &num1);

This takes an integer from the user and stores it in num1.

For example:

num1 = 17
7. printf("Enter second number: ");

This asks the user to enter the second number.

8. scanf("%d", &num2);

This takes an integer from the user and stores it in num2.

For example:

num2 = 5
9. remainder = num1 % num2;

% is called the modulus operator.

It gives us the remainder after division.

For example:

17 ÷ 5 = 3 remainder 2

Therefore:

17 % 5 = 2

So:

remainder = 2
10. printf("Remainder = %d", remainder);

This displays the value stored in remainder.

Output:

Remainder = 2
11. return 0;

This tells the computer that the program finished successfully.*/