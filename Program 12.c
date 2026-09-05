// Write code forCalculate Simple Interest Using float in c Language

// The manual gives the formula as i = (p*r*n)/100.


#include <stdio.h>

int main()
{
    int n;
    float p, r, I;

    printf("Enter Amount: ");
    scanf("%f", &p);

    printf("Enter No of Years: ");
    scanf("%d", &n);

    printf("Enter Rate: ");
    scanf("%f", &r);

    I = (p * r * n) / 100;

    printf("Interest = %.2f", I);

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

4. int n;

This creates an integer variable called n.

Here, n stores the number of years.

For example:

n = 2
5. float p, r, I;

This creates three float variables.

p → stores the principal amount

r → stores the rate of interest

I → stores the calculated simple interest

We use float because these values can contain decimal numbers.

6. printf("Enter Amount: ");

This asks the user to enter the amount.

For example:

Enter Amount: 10000
7. scanf("%f", &p);

scanf() takes the amount entered by the user.

%f is used because p is a float.

&p tells C where to store the entered value.

For example:

p = 10000
8. printf("Enter No of Years: ");

This asks the user to enter the number of years.

For example:

Enter No of Years: 2
9. scanf("%d", &n);

This takes an integer value from the user.

%d is used because n is an int.

For example:

n = 2
10. printf("Enter Rate: ");

This asks the user to enter the rate of interest.

For example:

Enter Rate: 5
11. scanf("%f", &r);

This takes the rate from the user.

%f is used because r is a float.

For example:

r = 5
12. I = (p * r * n) / 100;

This calculates the simple interest.

The formula is:

I = (p × r × n) / 100

Suppose:

p = 10000
r = 5
n = 2

Then:

I = (10000 × 5 × 2) / 100
I = 1000

So the simple interest is:

1000
13. printf("Interest = %.2f", I);

This displays the calculated interest.

%.2f means the answer will be displayed with 2 digits after the decimal point.

Output:

Interest = 1000.00
14. return 0;

This tells the computer that the program finished successfully.

Complete Output
Enter Amount: 10000
Enter No of Years: 2
Enter Rate: 5
Interest = 1000.00   . */