// Write code for Arithmetic Operators Using Two Numbers in C Language

/*Write a program to demonstrate the use of Arithmetic
operators by getting two numbers from the user */


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
    printf("Remainder = %d\n", num1 % num2);

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

This creates two integer variables.

num1 → stores the first number

num2 → stores the second number

5. printf("Enter first number: ");

This asks the user to enter the first number.

6. scanf("%d", &num1);

scanf() takes an integer from the user.

%d → used for an integer

&num1 → tells C where to store the entered number

For example:

num1 = 20
7. printf("Enter second number: ");

This asks the user to enter the second number.

8. scanf("%d", &num2);

This takes the second integer and stores it in num2.

For example:

num2 = 6
9. num1 + num2

The + operator performs addition.

20 + 6 = 26

Output:

Addition = 26
10. num1 - num2

The - operator performs subtraction.

20 - 6 = 14

Output:

Subtraction = 14
11. num1 * num2

The * operator performs multiplication.

20 * 6 = 120

Output:

Multiplication = 120
12. num1 / num2

The / operator performs division.

20 / 6 = 3

Because both variables are int, the decimal part is removed.

So the result is:

Division = 3
13. num1 % num2

The % operator gives the remainder.

20 ÷ 6 = 3 remainder 2

Therefore:

20 % 6 = 2

Output:

Remainder = 2
14. \n

\n means new line.

For example:

printf("Addition = %d\n", num1 + num2);

After printing the addition, the next output starts on a new line.

15. return 0;

This tells the computer that the program finished successfully.

Complete Output

If the user enters 20 and 6:

Enter first number: 20
Enter second number: 6
Addition = 26
Subtraction = 14
Multiplication = 120
Division = 3
Remainder = 2  .*/