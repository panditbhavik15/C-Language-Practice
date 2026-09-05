// Write code forCelsius to Fahrenheit Using float in C Language

// The manual uses the formula F = 1.8 × C + 32.

#include <stdio.h>

int main()
{
    float F, C;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", C, F);

    return 0;
}
Explanation
1. #include <stdio.h>

This includes the standard input/output library.

It gives us functions such as:

printf() → display something on the screen

scanf() → take input from the user

2. int main()

main() is the starting point of a C program.

When you run the program, execution starts from main().

int means the function will return an integer value.

3. { }

The curly brackets define the body of the main() function.

Everything inside { } belongs to main().

4. float F, C;

This creates two float variables.

C → stores the temperature in Celsius

F → stores the temperature in Fahrenheit

We use float because temperature can contain decimal values.

5. printf("Enter Temperature in Celsius: ");

This asks the user to enter the temperature in Celsius.

Output:

Enter Temperature in Celsius:
6. scanf("%f", &C);

scanf() takes the temperature entered by the user.

%f is used because C is a float.

&C tells C where to store the entered value.

For example, if the user enters:

25

then:

C = 25
7. F = (C * 1.8) + 32;

This converts Celsius into Fahrenheit.

The formula is:

F = 1.8 × C + 32

If:

C = 25

then:

F = (25 × 1.8) + 32
F = 45 + 32
F = 77

So:

F = 77
8. printf("%.2f Celsius = %.2f Fahrenheit", C, F);

This displays both temperatures.

%.2f means display 2 digits after the decimal point.

Output:

25.00 Celsius = 77.00 Fahrenheit
9. return 0;

This tells the computer that the program finished successfully.

Complete Output
Enter Temperature in Celsius: 25
25.00 Celsius = 77.00 Fahrenheit
Important

Remember the conversion formula:

F = (C × 1.8) + 32        */