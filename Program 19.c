// Write a program for Grade Using if-else Ladder in C Lang.

  
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A");
    else if (marks >= 80)
        printf("Grade B");
    else if (marks >= 70)
        printf("Grade C");
    else if (marks >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}

/*
Explanation
#include <stdio.h> — Includes the standard input/output library.
int main() — The main function where program execution starts.
int marks; — Declares an integer variable to store marks.
printf("Enter your marks: "); — Asks the user to enter marks.
scanf("%d", &marks); — Takes the marks as input.
if (marks >= 90) — Checks if marks are 90 or more.
If true, it prints Grade A.
else if (marks >= 80) — If the first condition is false, checks whether marks are 80 or more.
else if (marks >= 70) — Checks whether marks are 70 or more.
else if (marks >= 60) — Checks whether marks are 60 or more.
else — Executes when none of the above conditions are true.
return 0; — Ends the program successfully.
Complete Output
Example 1
Enter your marks: 95
Grade A
Example 2
Enter your marks: 75
Grade C
Example 3
Enter your marks: 45
Grade F
Remember
if       → first condition
else if  → another condition
else     → if all conditions are false

This is called an if-else ladder because multiple conditions are checked one after another.*/
