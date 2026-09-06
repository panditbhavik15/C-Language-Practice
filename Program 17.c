// Write code for   Shorthand Assignment Operators in C Language

/*Write a program to demonstrate the use of shorthand assignment operators*/


#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial value = %d\n", a);

    a += 5;
    printf("After a += 5 = %d\n", a);

    a -= 3;
    printf("After a -= 3 = %d\n", a);

    a *= 2;
    printf("After a *= 2 = %d\n", a);

    a /= 4;
    printf("After a /= 4 = %d\n", a);

    return 0;
}


/* Explanation

1. `#include <stdio.h>` — Includes the standard input/output library for using `printf()`.

2. `int main()` — The main function where program execution starts.

3. `{` — Starts the `main()` function.

4. `int a = 10;` — Declares an integer variable `a` and gives it the value `10`.

5. `printf("Initial value = %d\n", a);` — Prints the initial value of `a`.

6. `a += 5;` — Adds `5` to `a`.

   * Same as `a = a + 5`
   * `10 + 5 = 15`

7. `a -= 3;` — Subtracts `3` from `a`.

   * Same as `a = a - 3`
   * `15 - 3 = 12`

8. `a *= 2;` — Multiplies `a` by `2`.

   * Same as `a = a * 2`
   * `12 × 2 = 24`

9. `a /= 4;` — Divides `a` by `4`.

   * Same as `a = a / 4`
   * `24 ÷ 4 = 6`

10. `return 0;` — Ends the program successfully.

11. `}` — Ends the `main()` function.

## Complete Output

```text
Initial value = 10
After a += 5 = 15
After a -= 3 = 12
After a *= 2 = 24
After a /= 4 = 6
```

### Remember

* `a += b` → `a = a + b`
* `a -= b` → `a = a - b`
* `a *= b` → `a = a * b`
* `a /= b` → `a = a / b`
* `a %= b` → `a = a % b`
 */