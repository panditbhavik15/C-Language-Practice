// Write code for Increment and Decrement Operators in C Language

/*Write a program to demonstrate the use of increment and decrement operators*/


#include <stdio.h>

int main()
{
    int a = 10;

    printf("Value of a = %d\n", a);

    a++;
    printf("After increment = %d\n", a);

    a--;
    printf("After decrement = %d\n", a);

    return 0;
}

/*
Explanation
#include <stdio.h> — Includes the standard input/output library so we can use printf().
int main() — The main function where the program starts.
{ — Starts the body of the main() function.
int a = 10; — Creates an integer variable a and stores 10 in it.
printf("Value of a = %d\n", a); — Prints the current value of a.
%d is used for an integer.
\n moves to the next line.
a++; — Increment operator increases a by 1.
10 becomes 11.
printf("After increment = %d\n", a); — Prints the new value, 11.
a--; — Decrement operator decreases a by 1.
11 becomes 10.
printf("After decrement = %d\n", a); — Prints the new value, 10.
return 0; — Ends the program successfully.
} — Ends the main() function.
Complete Output
Value of a = 10
After increment = 11
After decrement = 10
Remember
a++ → increases by 1
a-- → decreases by 1   . */