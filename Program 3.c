 // Write a code for scanf() to Take Input from the User in c lang

 #include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

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

4. int age;

This creates an integer variable called age.

We have not given it a value yet.

The user will enter the value later.

5. printf("Enter your age: ");

printf() displays a message on the screen.

Output:

Enter your age:

It asks the user to enter their age.

6. scanf("%d", &age);

scanf() is used to take input from the user.

%d tells C that we want to take an integer.

&age tells C where to store the value entered by the user.

For example, if the user enters:

20 */