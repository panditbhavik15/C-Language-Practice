// Write code for sizeof Operator in C Language

/*Write a program to demonstrate the use of sizeof operator*/


#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;

    printf("Size of int = %zu bytes\n", sizeof(a));
    printf("Size of float = %zu bytes\n", sizeof(b));
    printf("Size of char = %zu byte\n", sizeof(c));

    return 0;
}


/* Explanation

1. `#include <stdio.h>` — Includes the standard input/output library for using `printf()`.

2. `int main()` — The main function where program execution starts.

3. `int a;` — Creates an integer variable named `a`.

4. `float b;` — Creates a floating-point variable named `b`.

5. `char c;` — Creates a character variable named `c`.

6. `sizeof(a)` — Finds the amount of memory used by variable `a`.

7. `%zu` — Format specifier used to print the result of `sizeof`.

8. `sizeof(b)` — Finds the memory size of the `float` variable.

9. `sizeof(c)` — Finds the memory size of the `char` variable.

10. `return 0;` — Ends the program successfully.

 Complete Output

The exact size of `int` and `float` can depend on the system/compiler. A common output is:

text
Size of int = 4 bytes
Size of float = 4 bytes
Size of char = 1 byte


emember

`sizeof()` → tells you **how many bytes of memory** a data type or variable uses.
*/