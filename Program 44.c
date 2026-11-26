// Write a program to add two 3x3 matrices using a 2D array

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int a[ROWS][COLS], b[ROWS][COLS], sum[ROWS][COLS];
    int i, j;

    printf("Enter matrix A (%d x %d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B (%d x %d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nMatrix A:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }

    printf("\nA + B:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%4d", sum[i][j]);
        printf("\n");
    }

    return 0;
}

/*
Explanation

1. int a[ROWS][COLS];

A 2D array is an array of arrays.
a[i][j] means row i and column j.
Both indexes start at 0, so a 3x3 matrix uses indexes 0..2.

2. Nested loops

The outer loop walks the rows, the inner loop walks the columns.
Two loops are needed because there are two dimensions.

3. Adding matrices

Position by position:

    sum[i][j] = a[i][j] + b[i][j]

Both matrices must have the same size, otherwise the addition is undefined.

4. printf("%4d", value);

Prints each number in a 4 character wide field so the columns line up
and the result looks like a real matrix.

5. #define

#define ROWS 3 creates a constant that the compiler substitutes before compiling.
Changing the size in one place updates every loop in the program.

Complete Output

Enter matrix A (3 x 3):
1 2 3
4 5 6
7 8 9
Enter matrix B (3 x 3):
9 8 7
6 5 4
3 2 1

A + B:
  10  10  10
  10  10  10
  10  10  10
*/
