// Write a program to find the transpose of a matrix

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int matrix[ROWS][COLS], transpose[COLS][ROWS];
    int i, j;

    printf("Enter the matrix (%d x %d):\n", ROWS, COLS);

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%d", &matrix[i][j]);

    /* Rows become columns and columns become rows. */
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            transpose[j][i] = matrix[i][j];

    printf("\nOriginal matrix:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%4d", matrix[i][j]);
        printf("\n");
    }

    printf("\nTranspose:\n");
    for (i = 0; i < COLS; i++)
    {
        for (j = 0; j < ROWS; j++)
            printf("%4d", transpose[i][j]);
        printf("\n");
    }

    return 0;
}

/*
Explanation

1. What a transpose is

Every element at row i, column j moves to row j, column i.
The first row becomes the first column, and so on.

2. transpose[j][i] = matrix[i][j];

Note the swapped indexes on the left side.
This single line performs the whole transpose.

3. transposed dimensions

int transpose[COLS][ROWS];

The dimensions are reversed on purpose: a 3x4 matrix becomes 4x3.
For a square matrix the size is unchanged, but writing it this way keeps
the code correct if you change ROWS and COLS.

4. Printing

The printing loops for the transpose run COLS rows and ROWS columns,
matching the new shape.

5. Try it

    1 2 3        1 4 7
    4 5 6   ->   2 5 8
    7 8 9        3 6 9

Complete Output

Enter the matrix (3 x 3):
1 2 3
4 5 6
7 8 9

Transpose:
   1   4   7
   2   5   8
   3   6   9
*/
