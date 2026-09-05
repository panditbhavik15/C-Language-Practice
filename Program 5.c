 // Write a code for Arithmetic Operations on Two Numbers in C Language

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Addition = %d\n", num1 + num2);
    printf("Subtraction = %d\n", num1 - num2);
    printf("Multiplication = %d\n", num1 * num2);
    printf("Division = %d\n", num1 / num2);

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

4. int num1, num2;

This creates two integer variables:

num1 → stores the first number

num2 → stores the second number

5. printf("Enter first number: ");

This asks the user to enter the first number.

6. scanf("%d", &num1);

This takes an integer from the user and stores it in num1.

For example:

num1 = 20
7. printf("Enter second number: ");

This asks the user to enter the second number.

8. scanf("%d", &num2);

This takes an integer from the user and stores it in num2.

For example:

num2 = 10
9. printf("Addition = %d\n", num1 + num2);

+ is the addition operator.

If:

num1 = 20
num2 = 10

then:

20 + 10 = 30

Output:

Addition = 30

\n moves the cursor to the next line.

10. printf("Subtraction = %d\n", num1 - num2);

- is the subtraction operator.

20 - 10 = 10

Output:

Subtraction = 10
11. printf("Multiplication = %d\n", num1 * num2);

* is the multiplication operator.

20 * 10 = 200

Output:

Multiplication = 200
12. printf("Division = %d\n", num1 / num2);

/ is the division operator.

20 / 10 = 2

Output:

Division = 2

Since we are using int, decimal parts are not displayed.

13. return 0;

This tells the computer that the program finished successfully.

Complete Output

If the user enters 20 and 10:

Enter first number: 20
Enter second number: 10
Addition = 30
Subtraction = 10
Multiplication = 200
Division = 2*/