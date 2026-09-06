// Write code for Odd or Even Using Conditional Operator in C Language

/*Write a program to find the number is odd or even using conditional operator*/


#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even") : printf("Odd");

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

4. int num;

This creates an integer variable called num.

It will store the number entered by the user.

5. printf("Enter a number: ");

This asks the user to enter a number.

Output:

Enter a number:
6. scanf("%d", &num);

This takes an integer from the user and stores it in num.

For example, if the user enters:

10

then:

num = 10
7. num % 2

The % operator gives the remainder after division.

If:

num = 10

then:

10 % 2 = 0

If the remainder is 0, the number is even.

8. num % 2 == 0

== is the comparison operator.

It checks whether two values are equal.

So:

num % 2 == 0

means:

"Is the remainder equal to 0?"

9. ? printf("Even") : printf("Odd");

This is called the conditional operator.

Its basic structure is:

condition ? statement1 : statement2;

If the condition is true, statement1 runs.

If the condition is false, statement2 runs.

Here:

(num % 2 == 0) ? printf("Even") : printf("Odd");

If the number is divisible by 2:

Even

Otherwise:

Odd
10. return 0;

This tells the computer that the program finished successfully.

Complete Output

If the user enters 10:

Enter a number: 10
Even

If the user enters 7:

Enter a number: 7
Odd   .. */