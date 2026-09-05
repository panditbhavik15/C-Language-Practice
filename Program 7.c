 // Write a code for Using float for Decimal Numbers in C Lang

#include <stdio.h>

int main()
{
    float num1, num2, sum;

    printf("Enter first decimal number: ");
    scanf("%f", &num1);

    printf("Enter second decimal number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("Sum = %.2f", sum);

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

4. float num1, num2, sum;

This creates three variables using the float data type.

float is used to store decimal numbers.

For example:

10.5
25.75
3.14

Here:

num1 → stores the first decimal number

num2 → stores the second decimal number

sum → stores the result

5. printf("Enter first decimal number: ");

This asks the user to enter the first decimal number.

6. scanf("%f", &num1);

scanf() takes input from the user.

%f is used for a float value.

&num1 tells C where to store the entered value.

For example, if the user enters:

10.5

then:

num1 = 10.5
7. printf("Enter second decimal number: ");

This asks the user to enter the second decimal number.

8. scanf("%f", &num2);

This takes the second decimal number and stores it in num2.

For example:

num2 = 5.25
9. sum = num1 + num2;

This adds the two decimal numbers.

If:

num1 = 10.5
num2 = 5.25

then:

sum = 10.5 + 5.25

Therefore:

sum = 15.75
10. printf("Sum = %.2f", sum);

This displays the value of sum.

%f is used to display a float.

%.2f means display 2 digits after the decimal point.

For example:

15.75

Output:

Sum = 15.75
11. return 0;

This tells the computer that the program finished successfully.

Complete Output

If the user enters 10.5 and 5.25:

Enter first decimal number: 10.5
Enter second decimal number: 5.25
Sum = 15.75*/