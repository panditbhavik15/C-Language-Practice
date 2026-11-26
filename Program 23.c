// Write a program to print a pyramid star pattern using nested loops

#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        /* Print the leading spaces so the stars stay centred. */
        for (j = 1; j <= rows - i; j++)
            printf(" ");

        /* Row i has 2 * i - 1 stars. */
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

/*
Explanation

1. A nested loop means one loop inside another.

The outer loop (i) controls the rows.
The inner loops (j) control what is printed on each row.

2. for (j = 1; j <= rows - i; j++)

Prints the spaces before the stars.
Row 1 needs the most spaces, the last row needs none.

3. for (j = 1; j <= (2 * i - 1); j++)

Row 1 prints 1 star, row 2 prints 3 stars, row 3 prints 5 stars.
The formula is 2 * i - 1.

4. printf("\n");

Moves to the next row.

Complete Output

Enter number of rows: 5
    *
   ***
  *****
 *******
*********
*/
