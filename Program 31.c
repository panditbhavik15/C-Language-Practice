// Write a program to store and display student details using a structure

#include <stdio.h>

/* A structure groups variables of different types under one name. */
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf(" %49[^\n]", s.name); /* read a full line including spaces */

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Record ---\n");
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);

    return 0;
}

/*
Explanation

1. struct Student { ... };

A structure is a user defined data type.
Here it holds an int, a char array and a float together,
which is exactly what a student record needs.

2. struct Student s;

Creates one variable of type struct Student.

3. The dot operator

s.roll  -> the roll number
s.name  -> the name
s.marks -> the marks

The dot is used to reach a member of a structure.

4. scanf(" %49[^\n]", s.name);

The leading space skips any leftover newline.
%49[^\n] reads up to 49 characters until a newline is reached,
so names with spaces such as "Bhavik Pandit" work correctly.

5. %.2f

Prints the marks with exactly two digits after the decimal point.

Complete Output

Enter roll number: 12
Enter name: Bhavik Pandit
Enter marks: 87.5

--- Student Record ---
Roll  : 12
Name  : Bhavik Pandit
Marks : 87.50
*/
