// Write a program to make a simple calculator using the switch statement

#include <stdio.h>

int main()
{
    double a, b;
    char op;

    printf("Enter an expression (for example 12 + 5): ");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (op)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: division by zero is not allowed.\n");
            else
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            break;

        default:
            printf("Unknown operator '%c'.\n", op);
    }

    return 0;
}

/*
Explanation

1. switch (op)

switch compares one value against several fixed cases.
It is a cleaner alternative to a long if-else ladder when you are
testing a single character or integer.

2. case '+':

If op equals '+', execution jumps here.

3. break;

break leaves the switch.
Without it, execution "falls through" and the next case also runs,
which is almost always a bug.

4. default:

Runs when no case matched, for example when the user types 'x'.

5. Division by zero

Dividing a double by 0 does not crash, but the result is meaningless,
so we check for it before dividing.

6. %lf

Used with double in both scanf() and printf().

Complete Output

Enter an expression (for example 12 + 5): 12 + 5
12.00 + 5.00 = 17.00

Enter an expression (for example 12 + 5): 12 / 0
Error: division by zero is not allowed.
*/
