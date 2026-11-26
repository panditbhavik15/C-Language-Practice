// Write a program to find the largest of three numbers

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is the largest.\n", a);
    else if (b >= a && b >= c)
        printf("%d is the largest.\n", b);
    else
        printf("%d is the largest.\n", c);

    return 0;
}

/*
Explanation

1. && is the AND operator

a >= b && a >= c

Both conditions must be true for the whole expression to be true.
So this asks: "is a at least as big as b AND at least as big as c?"

2. Why >= instead of >

With >, entering 7 7 3 would fail every branch and print a wrong answer.
Using >= makes ties fall into the first matching branch.

3. The if-else ladder

Only one branch can run.
The first branch that is true wins, so we never test the rest.

4. Test yourself

    10 4 7   -> 10 is the largest.
    7  7  3  -> 7 is the largest.
    2  5  9  -> 9 is the largest.

Complete Output

Enter three numbers: 10 4 7
10 is the largest.
*/
