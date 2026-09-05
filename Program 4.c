// Write a code for Take Two Numbers and Add Them in c Lang.

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d", sum);

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

4. int num1, num2, sum;

This creates three integer variables:

num1 → stores the first number

num2 → stores the second number

sum → stores the result of addition

5. printf("Enter first number: ");

This asks the user to enter the first number.

Output:

Enter first number:
6. scanf("%d", &num1);

scanf() takes the number entered by the user.

%d means we are taking an integer.

&num1 tells C to store the entered number inside num1.

For example, if the user enters:

10

then:

num1 = 10
7. printf("Enter second number: ");

This asks the user to enter the second number.

8. scanf("%d", &num2);

This takes the second number from the user and stores it in num2.

For example:

num2 = 20
9. sum = num1 + num2;

This performs the addition.

If:

num1 = 10
num2 = 20

then:

sum = 10 + 20

Therefore:

sum = 30
10. printf("Sum = %d", sum);

This displays the result.

%d is replaced by the value stored in sum.

Output:

Sum = 30
11. return 0;

This tells the computer that the program finished successfully.

Complete Output

If the user enters 10 and 20:

Enter first number: 10
Enter second number: 20
Sum = 30*/