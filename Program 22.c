// Write a program to print the multiplication table of a number using a do-while loop

#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication table of %d\n\n", num);

    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

    return 0;
}

/*
Explanation

1. int num, i = 1;

num -> the number whose table we want
i   -> counter that starts at 1

2. do { ... } while (i <= 10);

A do-while loop runs the body first and checks the condition afterwards.
That means the body always runs at least once, even if the condition is false.

The while loop checks the condition before running the body, so it can run zero times.

3. printf("%d x %d = %d\n", num, i, num * i);

Prints one line of the table such as:

    5 x 1 = 5

4. i++;

Moves to the next multiplier.

Complete Output

Enter a number: 5

Multiplication table of 5

5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
*/
