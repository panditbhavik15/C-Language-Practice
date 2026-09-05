// write a code fro Calculate the Area of a Circle Using float in C Language

#include <stdio.h>

int main()
{
    float radius, area;
    float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of circle = %.2f", area);

    return 0;
}

/*
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

4. float radius, area;

This creates two float variables.

radius → stores the radius of the circle

area → stores the calculated area

We use float because the values can contain decimal numbers.

5. float pi = 3.14;

This creates a float variable called pi.

We store the value 3.14 in it.

pi = 3.14
6. printf("Enter radius of circle: ");

This asks the user to enter the radius.

Output:

Enter radius of circle:
7. scanf("%f", &radius);

scanf() takes the radius from the user.

%f is used for a float value.

&radius tells C where to store the entered value.

For example, if the user enters:

5

then:

radius = 5
8. area = pi * radius * radius;

This calculates the area of the circle.

The formula is:

Area = π × radius × radius

If:

pi = 3.14
radius = 5

then:

area = 3.14 × 5 × 5
area = 78.50
9. printf("Area of circle = %.2f", area);

This displays the calculated area.

%.2f means display 2 digits after the decimal point.

Output:

Area of circle = 78.50
10. return 0;

This tells the computer that the program finished successfully.

Complete Output
Enter radius of circle: 5
Area of circle = 78.50         .*/