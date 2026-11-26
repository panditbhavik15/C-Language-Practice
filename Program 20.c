// Write a program to print numbers from 1 to N using a for loop

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

/*
Explanation

1. int n, i;

n stores the limit entered by the user.
i is the loop counter.

2. for (i = 1; i <= n; i++)

A for loop has three parts inside the brackets:

    i = 1     -> starting value (run once, before the loop)
    i <= n    -> condition (checked before every round)
    i++       -> update (runs after every round)

So the loop starts at 1 and keeps repeating while i is not greater than n.

3. printf("%d ", i);

Prints the current value of i followed by a space.

4. printf("\n");

Moves the cursor to a new line after the loop ends.

Complete Output

Enter N: 5
1 2 3 4 5
*/
