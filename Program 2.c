 //Write a code for Variables + printf()

 #include <stdio.h>

int main()
{
    int age = 20;

    printf("My age is %d", age);

    return 0;
}

/*
Explanation
1. #include <stdio.h>

This includes the standard input/output library. It gives us functions such as:

printf() → display something on the screen
scanf() → take input from the user

2. int main()

main() is the starting point of a C program. When you run the program, execution starts from main(). 
int means the function will return an integer value.

3. { }

The curly brackets define the body of the main() function.
 
Everything inside { } belongs to main().

4. int age = 20;

This creates a variable called age.
int means the variable can store a whole number.
age is the name of the variable.
20 is the value stored in the variable.

So:

age = 20

The ; means the statement is finished.

5. printf("My age is %d", age);

printf() displays information on the screen.

%d is used to display an integer value.

age tells C to put the value of the age variable where %d is written.