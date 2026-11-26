// Write a program to write data to a file and then read it back

#include <stdio.h>

int main()
{
    FILE *fp;
    char line[200];

    /* ---------- 1. Write to the file ---------- */
    fp = fopen("notes.txt", "w");

    if (fp == NULL)
    {
        printf("Could not create the file.\n");
        return 1;
    }

    fprintf(fp, "C Language Practice\n");
    fprintf(fp, "File handling demo\n");

    fclose(fp);

    /* ---------- 2. Read the file back ---------- */
    fp = fopen("notes.txt", "r");

    if (fp == NULL)
    {
        printf("Could not open the file.\n");
        return 1;
    }

    printf("Contents of notes.txt:\n\n");

    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);

    return 0;
}

/*
Explanation

1. FILE *fp;

A file pointer is used to work with a file.
All file functions need it.

2. fopen("notes.txt", "w");

Opens the file in write mode.
"w" creates the file if it does not exist, or empties it if it does.

Other common modes:

    "r"  -> read only, the file must already exist
    "a"  -> append, new data is added at the end
    "rb" -> read in binary mode

3. if (fp == NULL)

fopen() returns NULL when the file cannot be opened,
for example because of a wrong path or missing permission.
Always check this before using the file.

4. fprintf(fp, ...);

Works like printf(), but writes into the file instead of the screen.

5. fclose(fp);

Closes the file and saves the data.
Forgetting this can lose the contents, so every fopen() needs a matching fclose().

6. while (fgets(line, sizeof(line), fp) != NULL)

Reads the file one line at a time until the end.
fgets() returns NULL when there is nothing left to read.

Complete Output

Contents of notes.txt:

C Language Practice
File handling demo
*/
