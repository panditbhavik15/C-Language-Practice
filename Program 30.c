// Write a program to swap two numbers using pointers

#include <stdio.h>

/* Receives the addresses of two integers. */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter first number : ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap : x = %d, y = %d\n", x, y);

    return 0;
}

/*
Explanation

1. &x and &y

& gives the address of a variable.
So swap(&x, &y) sends the addresses, not the values.

2. int *a, int *b

A pointer stores an address.
*a means "the value stored at the address a points to".

3. Why a pointer is needed

In C, function arguments are passed by value.
A normal function such as swap(int a, int b) receives copies,
so changing a and b inside the function would not change x and y.

By passing addresses we let the function change the original variables.
This is called passing by reference.

4. *a = *b;

Copies the value that b points to into the place a points to.

5. A temporary variable is still required

temp = *a;
*a   = *b;
*b   = temp;

Without temp the first value would be lost.

Complete Output

Enter first number : 10
Enter second number: 20

Before swap: x = 10, y = 20
After swap : x = 20, y = 10
*/
